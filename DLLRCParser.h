//
//  DLLRCParser.h
//  LrcParser
//
//  Created by lee on 13-10-14.
//  Copyright (c) 2013年 Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DLLRCParser : NSObject{
    
    NSMutableArray * tmpArray;
    
    
}

@property(nonatomic,retain)NSMutableArray * lrcArrayList;

-(id)init;

-(NSMutableArray *)parseLRC:(NSString *)lrcStr;

@end
