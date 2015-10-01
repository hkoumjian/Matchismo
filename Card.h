//
//  Card.h
//  Matchismo
//
//  Created by Harris Koumjian on 9/4/13.
//  Copyright (c) 2013 Harris Koumjian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject


@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isFaceUp) BOOL faceUp;
@property (nonatomic, getter=isUnplayable) BOOL unplayable;

- (int)math:(Card *)card;


@end
