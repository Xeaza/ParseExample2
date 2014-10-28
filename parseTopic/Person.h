//
//  Person.h
//  parseTopicStudentVersion
//
//  Created by Taylor Wright-Sanson on 10/28/14.
//  Copyright (c) 2014 Mobile Makers. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface Person : PFObject <PFSubclassing>

@property NSNumber *age;
@property NSString *name;

- (BOOL)isTeenager;

@end
