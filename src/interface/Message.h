#ifndef Message_h_
#define Message_h_ 1

namespace Message
{
	extern const char* Success;
	extern const char* Unimplemented;
	extern const char* ArgCount;
	extern const char* BadRepo; // probably should never happen if we do our error-checking right
	extern const char* BadRemote;
	extern const char* BadRemoteName;
	extern const char* BareRepo;
	extern const char* FetchFailed;
	extern const char* BadConfiguration;
	extern const char* RemoteConnectionFailed;
	extern const char* DownloadFailed;
	extern const char* UpdateTipsFailed;
	extern const char* BadCommitish;
	extern const char* NoParent;
	extern const char* NoIndex;
	extern const char* NoWorkingTree;
	extern const char* NoMessage;
	extern const char* GitCommitError;
	extern const char* CantWriteTree;
	extern const char* NoDefaultUserName;
	extern const char* HasConflicts;
	extern const char* BadPush;
	extern const char* PushUnfinished;
	extern const char* RefNotPushed;
	extern const char* RemoteUnpackFailed;
	extern const char* InvalidSpec;
	extern const char* RefExists;
	extern const char* BranchNotCreated;
	extern const char* NoLocalBranch;
	extern const char* NoRemoteBranch;
	extern const char* SetUpstreamFailed;
	extern const char* UpstreamFailed;
	extern const char* DisassociatedRepo;
	extern const char* InvalidSource;
	extern const char* InvalidDest;
	extern const char* InvalidCallbacks;
	extern const char* NoTree;
	extern const char* NoBlob;
	extern const char* BadSHA;
	extern const char* GitOperationFailed;
	extern const char* InvalidRefName;
	extern const char* CheckoutFailed;
	extern const char* BadTreeEntry;
	extern const char* InconsistentRepos;
	extern const char* RepoExists;
	extern const char* CheckoutConflict;
	extern const char* BadFormat;
}
#endif // Message_h_

