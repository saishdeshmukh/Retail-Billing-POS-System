graph TD
    A[Start] --> B[Input Customer Name & Product Count n]
    B --> C{Is 0 < n <= 50?}
    C -- No --> D[Display Error & Exit]
    C -- Yes --> E[Loop: Input Name, Price, Stock for n items]
    E --> F{Valid Input, Price > 0, Stock >= 0?}
    F -- No --> D
    F -- Yes --> G[Display Available Products Catalog]
    G --> H[Input Product Choice & Quantity]
    H --> I{Valid Choice & Qty <= Stock?}
    I -- No --> D
    I -- Yes --> J[Calculate Subtotal = Price * Qty]
    J --> K{Subtotal >= 50?}
    K -- Yes --> L[Calculate GST = Subtotal * 5%]
    K -- No --> M[GST = 0]
    L --> N[Compute Final Bill = Subtotal + GST]
    M --> N
    N --> O[Deduct Qty from Product Stock]
    O --> P[Display Formatted Customer Bill]
    P --> Q[End]