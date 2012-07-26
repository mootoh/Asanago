//
//  Workspace.h
//  Asanago
//
//  Created by Motohiro Takayama on 7/26/12.
//  Copyright (c) 2012 mootoh.net. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class User;

@interface Workspace : NSManagedObject

@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *tasks;
@property (nonatomic, retain) NSSet *projects;
@property (nonatomic, retain) User *owner;
@end

@interface Workspace (CoreDataGeneratedAccessors)

- (void)addTasksObject:(NSManagedObject *)value;
- (void)removeTasksObject:(NSManagedObject *)value;
- (void)addTasks:(NSSet *)values;
- (void)removeTasks:(NSSet *)values;

- (void)addProjectsObject:(NSManagedObject *)value;
- (void)removeProjectsObject:(NSManagedObject *)value;
- (void)addProjects:(NSSet *)values;
- (void)removeProjects:(NSSet *)values;

@end
