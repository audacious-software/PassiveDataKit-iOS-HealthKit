//
//  PDKAppleHealthKitGenerator.h
//  PassiveDataKit
//
//  Created by Chris Karr on 6/26/17.
//  Copyright © 2017 Audacious Software. All rights reserved.
//

@import UIKit;
@import PassiveDataKit;

extern NSString * const PDKAppleHealthKitRequestedTypes;
extern NSString * const PDKAppleHealthStepsEnabled;

@interface PDKAppleHealthKitGenerator : PDKBaseGenerator<PDKStepCountGenerator>

+ (PDKAppleHealthKitGenerator *) sharedInstance;

- (BOOL) isAuthenticated;
- (void) authenticate:(void (^)(void))success failure:(void (^)(void))failure;

+ (UIColor *) dataColor;
- (void) requestRequiredPermissions:(void (^)(void))callback;

@end
