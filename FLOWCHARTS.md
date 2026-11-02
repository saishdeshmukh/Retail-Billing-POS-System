graph TD
    classDef process fill:#f8fafc,stroke:#1e3a8a,stroke-width:2px,color:#0f172a;
    classDef decision fill:#f1f5f9,stroke:#334155,stroke-width:2px,color:#0f172a;
    classDef terminal fill:#1e3a8a,stroke:#1e3a8a,stroke-width:2px,color:#ffffff;

    Start([Start]) --> InputMeta[Input Customer Name & Product Count n]:::process
    InputMeta --> CheckN{Is 0 < n <= 50?}:::decision
    
    CheckN -- No --> Err1[Display Error: Invalid number of products!]:::process
    Err1 --> End([End]):::terminal

    CheckN -- Yes --> LoopInit[Loop i = 0 to n-1: Input Name, Price, Stock]:::process
    LoopInit --> CheckValid{Valid Input? <br/> cin.fail() || price <= 0 || stock < 0}:::decision

    CheckValid -- Yes --> Err2[Display Error: Invalid input!]:::process
    Err2 --> End

    CheckValid -- No --> DisplayCat[Display Available Products Catalog]:::process
    DisplayCat --> InputChoice[Input Product Choice & Purchase Quantity]:::process
    
    InputChoice --> CheckOrder{Valid Choice & Qty <= Stock?}:::decision
    
    CheckOrder -- No --> Err3[Display Error: Invalid choice or stock!]:::process
    Err3 --> End

    CheckOrder -- Yes --> CalcSub[Calculate Subtotal = price * qty]:::process
    CalcSub --> CheckGST{Is Subtotal >= 50?}:::decision

    CheckGST -- Yes --> CalcTax[Calculate GST = Subtotal * 5 / 100]:::process
    CheckGST -- No --> NoTax[GST = 0.00]:::process

    CalcTax --> CalcFinal[Compute Final Bill = Subtotal + GST]:::process
    NoTax --> CalcFinal

    CalcFinal --> UpdateStock[Deduct Qty from Inventory: stock -= qty]:::process
    UpdateStock --> PrintBill[Display Formatted Customer Bill & Receipt]:::process
    PrintBill --> End