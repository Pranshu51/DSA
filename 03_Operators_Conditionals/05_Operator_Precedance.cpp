
/*
======================================================================
          OPERATOR PRECEDENCE, CATEGORY & ASSOCIATIVITY
======================================================================

Precedence | Category              | Operators                         | Associativity
--------------------------------------------------------------------------
Highest    | Postfix               | ()  []  .  ->                     | Left to Right
           | Postfix               | ++  --                            | Left to Right
--------------------------------------------------------------------------
           | Unary                 | ++  --  +  -  !  ~                | Right to Left
           | Unary                 | *  &  sizeof  (type cast)         |
--------------------------------------------------------------------------
           | Arithmetic (Multiplicative)
                                 | *  /  %                           | Left to Right
--------------------------------------------------------------------------
           | Arithmetic (Additive) | +  -                              | Left to Right
--------------------------------------------------------------------------
           | Shift                 | <<  >>                            | Left to Right
--------------------------------------------------------------------------
           | Relational            | <  <=  >  >=                      | Left to Right
--------------------------------------------------------------------------
           | Equality              | ==  !=                            | Left to Right
--------------------------------------------------------------------------
           | Bitwise AND           | &                                 | Left to Right
--------------------------------------------------------------------------
           | Bitwise XOR           | ^                                 | Left to Right
--------------------------------------------------------------------------
           | Bitwise OR            | |                                 | Left to Right
--------------------------------------------------------------------------
           | Logical AND           | &&                                | Left to Right
--------------------------------------------------------------------------
           | Logical OR            | ||                                | Left to Right
--------------------------------------------------------------------------
           | Conditional           | ?:                                | Right to Left
--------------------------------------------------------------------------
           | Assignment            | =  +=  -=  *=  /=  %=             | Right to Left
           | Assignment            | <<= >>= &= ^= |=                 |
--------------------------------------------------------------------------
Lowest     | Comma                 | ,                                 | Left to Right

======================================================================
*/

// Always use brackets to avoid confusion regarding precedence
// eg: int a = 5 + 3 * 2; => here multiplication has higher precedence than addition
// so it will be evaluated as int a = 5 + (3 * 2);  
// but to make it clear we should write it with brackets like int a = 5 + (3 * 2);
// this will make it clear for anyone reading the code