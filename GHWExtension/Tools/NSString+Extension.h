//
//  NSString+Extension.h
//  HJButtonAddExtension
//
//  Created by guohongwei on 2019/8/30.
//  Copyright © 2019年 guohongwei. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface NSString (Extension)


/*
 * 返回中间字符串
 * 如果 leftStr 为 nil , 则返回 rightStr 之前的字符串
 */
- (NSString *)stringBetweenLeftStr:(NSString *)leftStr andRightStr:(NSString *)rightStr;

// 删除空格和换行符
- (NSString *)deleteSpaceAndNewLine;

// 获取类型字符串
- (NSString *)fetchClassNameStr;

// 获取属性名
- (NSString *)fetchPropertyNameStr;
@end