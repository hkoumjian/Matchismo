//
//  PlayingCard.h
//  Matchismo
//
//  Created by Harris Koumjian on 9/9/13.
//  Copyright (c) 2013 Harris Koumjian. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

@end
