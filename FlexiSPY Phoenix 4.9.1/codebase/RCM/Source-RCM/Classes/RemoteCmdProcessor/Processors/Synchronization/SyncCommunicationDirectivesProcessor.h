//
//  SyncCommunicationDirectivesProcessor.h
//  RCM
//
//  Created by Makara Khloth on 6/18/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RemoteCmdAsyncHTTPProcessor.h"
#import "SyncCommunicationDirectiveDelegate.h"

@interface SyncCommunicationDirectivesProcessor : RemoteCmdAsyncHTTPProcessor <SyncCommunicationDirectiveDelegate> {
	
}

//Initialize Processor with RemoteCommandData and RemoteCmdProcessingDelegate;
- (id) initWithRemoteCommandData: (RemoteCmdData *) aRemoteCmdData 
	andCommandProcessingDelegate: (id <RemoteCmdProcessingDelegate>) aRemoteCmdProcessingDelegate;

@end
