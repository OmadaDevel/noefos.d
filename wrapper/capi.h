#ifndef CAPI_H__
#define CAPI_H__

#ifdef __cplusplus
extern "C" {
#endif

// initialization start and stop
void C_InitP2P (int argc, char *argv[], const char * appName);
//void C_InitI2P (int argc, char** argv, const char * appName);
void C_TerminateP2P ();
void C_StartP2P ();
// write system log to logStream, if not specified to <appName>.log in application's folder
void C_StopP2P ();
void C_RunPeerTest (); // should be called after UPnP

#ifdef __cplusplus
}
#endif

#endif
