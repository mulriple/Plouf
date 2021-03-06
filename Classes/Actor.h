#import <Foundation/Foundation.h>
#import "Box2D.h"
#import "cocos2d.h"
#import "InstanceContactOperation.h"
#import "ClassContactOperation.h"

@class InstanceContactOperation;

@interface Actor : NSObject 
{
	NSMutableArray *contactArray;
    NSMutableArray *instanceOperationArray;
    NSMutableArray *classOperationArray;
    
	b2World *world;
    CCNode *scene;
    BOOL destroyable;
}

#pragma mark Contact Properties

@property (nonatomic, readonly) NSSet *contactSet;
@property (readwrite, assign) BOOL destroyable;
@property (nonatomic, assign) b2World *world;
@property (nonatomic, retain) CCNode *scene;
@property (nonatomic, retain) NSMutableArray *contactArray;
@property (nonatomic, retain) NSMutableArray *instanceOperationArray;
@property (nonatomic, retain) NSMutableArray *classOperationArray;

#pragma mark Contact Methods

- (void)addContact:(Actor *)aContact;
- (void)removeContact:(Actor *)aContact;
- (void)removeAllContacts;
- (void)addInstanceOperation:(InstanceContactOperation *)aOperation;
- (void)removeInstanceOperation:(InstanceContactOperation *)aOperation;
- (void)removeAllInstanceOperations;
- (void)addClassOperation:(ClassContactOperation *)aOperation;
- (void)removeClassOperation:(ClassContactOperation *)aOperation;
- (void)removeAllClassOperations;

#pragma mark Event Methods

- (void)actorDidAppear;
- (void)actorWillDisappear;
- (void)worldDidStep;

#pragma mark Game Properties

- (CGPoint)position;




@end
