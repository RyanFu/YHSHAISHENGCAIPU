//
//  UIColor+Hex.h
//  YHSCategories
//
//  Created by YANGHAISHENG on 2016/11/29.
//  Copyright © 2016年 YANGHAISHENG. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
 * Useful methods to create UIColor objects base on their base 16 (hexadecimal) codes.
 */
@interface UIColor (Hex)

/*
 * Returns a color based on the hex code string.
 *
 * @param hexString The hex string.
 * @returns A hex color.
 */
+ (UIColor *)colorFromHex:(NSString *)hex;

/*
 * Returns a color based on the hex code string plus an alpha value.
 *
 * @param hexString The hex string.
 * @param alpha The alpha value of the color.
 * @returns A hex color.
 */
+ (UIColor *)colorFromHex:(NSString *)hex alpha:(CGFloat)alpha;

/*
 * Returns a the hex string equivalent to a color.
 *
 * @returns A hex string.
 */
- (NSString *)hexFromColor;

@end
