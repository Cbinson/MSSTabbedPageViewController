//
//  MSSCustomHeightNavigationBar.h
//  Paged Tabs Example
//
//  Created by Merrick Sapsford on 27/03/2016.
//  Copyright © 2016 Merrick Sapsford. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_EXTENSION_UNAVAILABLE_IOS("MSSCustomHeightNavigationBar is unavailable in app extensions.")
@interface MSSCustomHeightNavigationBar : UINavigationBar

@property (nonatomic, assign) BOOL offsetTransformRequired;

- (void)baseInit;

- (CGFloat)heightIncreaseValue;

- (BOOL)heightIncreaseRequired;

@end
