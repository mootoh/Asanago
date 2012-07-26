//
//  User.h
//  Asanago
//
//  Created by Motohiro Takayama on 7/26/12.
//  Copyright (c) 2012 mootoh.net. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Workspace;

@interface User : NSManagedObject

@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *workspaces;
@property (nonatomic, retain) NSManagedObject *assigned_tasks;
@property (nonatomic, retain) NSManagedObject *following_tasks;
@property (nonatomic, retain) NSManagedObject *following_projects;
@end

@interface User (CoreDataGeneratedAccessors)

- (void)addWorkspacesObject:(Workspace *)value;
- (void)removeWorkspacesObject:(Workspace *)value;
- (void)addWorkspaces:(NSSet *)values;
- (void)removeWorkspaces:(NSSet *)values;

@end
