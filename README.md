- _start_:
    * if time = 8am:
        + unlock door
        + if customer enters door: (prob move out of if statement i feel)
            + add customer to line
    + else if time = 9pm:
        + lock door
        + if a customer is done eating and wants to leave:
            + unlock door
            + wait 2 mins
            + lock door
- _interaction_:
    * if customer responds:
        + if all responses are items on menu:
            + put in order
            + move to _ordered_
        + if not:
            + moveto _interaction_
    * else:
+ _ordered_:
    - cashier gets order
- _payment_:
    - if customer gives money:
        * money += 1
    * else:
        + moveto 
    - if queue not full:
        * if cashier places order on queue:
            + moveto _chef_
        * if not:
            + bossmood -= 1
+ _chef_:

