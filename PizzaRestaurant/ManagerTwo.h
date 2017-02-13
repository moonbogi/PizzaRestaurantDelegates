//
//  ManagerTwo.h
//  PizzaRestaurant
//
//  Created by Hyung Jip Moon on 2017-02-12.
//  Copyright © 2017 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Kitchen.h"
#import "KitchenDelegate.h"

@interface ManagerTwo : NSObject <KitchenDelegate>


- (BOOL)kitchen:(Kitchen *)kitchen shouldMakePizzaOfSize:(PizzaSize)size andToppings:(NSArray *)toppings;
- (BOOL)kitchenShouldUpgradeOrder:(Kitchen *)kitchen;

- (void)kitchenDidMakePizza:(Pizza *)pizza;

@end
