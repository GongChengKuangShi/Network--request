//
//  NSDictionary+safeObject.h
//  NetworkRequest
//
//  Created by xiangronghua on 2017/2/6.
//  Copyright © 2017年 xiangronghua. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (safeObject)
- (NSString *)safeObjectForKey:(id)key;
@end
