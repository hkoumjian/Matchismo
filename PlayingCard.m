//
//  PlayingCard.m
//  Matchismo
//
//  Created by Harris Koumjian on 9/9/13.
//  Copyright (c) 2013 Harris Koumjian. All rights reserved.
//

#import "PlayingCard.h"

@implementation PlayingCard

- (NSString *)contents
{
    
    NSArray *rankStrings = @[@"?",@"A",@"2",@"3",@"4",@"5",@"6",@"7",@"8",@"9",@"10",@"J",@"Q",@"K"];
    return [rankStrings[self.rank] stringByAppendingString:self.suit];
}

@end
