//
//  Deck.h
//  Matchismo
//
//  Created by Harris Koumjian on 9/9/13.
//  Copyright (c) 2013 Harris Koumjian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (Card *)drawRandomCard;

@end
