//
//  Project.h
//  Asanago
//
//  Created by Motohiro Takayama on 7/26/12.
//  Copyright (c) 2012 mootoh.net. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class User, Workspace;

@interface Project : NSManagedObject

@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * archived;
@property (nonatomic, retain) NSDate * created_at;
@property (nonatomic, retain) NSDate * modified_at;
@property (nonatomic, retain) NSString * notes;
@property (nonatomic, retain) NSSet *tasks;
@property (nonatomic, retain) Workspace *workspace;
@property (nonatomic, retain) User *followers;
@end

@interface Project (CoreDataGeneratedAccessors)

- (void)addTasksObject:(NSManagedObject *)value;
- (void)removeTasksObject:(NSManagedObject *)value;
- (void)addTasks:(NSSet *)values;
- (void)removeTasks:(NSSet *)values;

@end
