/* Copyright (c) 2010 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTMOAuthBuzzViewController.h
//

#if !GTL_REQUIRE_SERVICE_INCLUDES || (GTL_INCLUDE_OAUTH && GTL_INCLUDE_BUZZ_SERVICE)

#include <Foundation/Foundation.h>

#if TARGET_OS_IPHONE

#import "GTMOAuthViewControllerTouch.h"

@interface GTMOAuthBuzzViewControllerTouch : GTMOAuthViewControllerTouch

// caller may also set iconURLString for the windowController.authentication
// object
- (id)initWithScope:(NSString *)scope
        consumerKey:(NSString *)consumerKey
         privateKey:(NSString *)privateKey
             domain:(NSString *)domain
           language:(NSString *)language
     appServiceName:(NSString *)keychainAppServiceName
           delegate:(id)delegate
   finishedSelector:(SEL)finishedSelector;

@end

#endif // TARGET_OS_IPHONE

#endif // !GTL_REQUIRE_SERVICE_INCLUDES || (GTL_INCLUDE_OAUTH && GTL_INCLUDE_BUZZ_SERVICE)
