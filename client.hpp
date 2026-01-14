#include "common.hpp"

extern RDMA client;

// cm 建链流程
int connect_to_ip_on_port (const char* ip, int port);

// verbs 发流程
int send (string message);

// RDMA remote write 对端无感知
int write (string message);

// RDMA remote read 对端无感知
string read_remote ();

// 启动客户端接收线程（轮询CQ并处理接收到的消息）
thread start_client_receiver_thread();

// 发起一个TASK_REQUEST并等待打印结果
bool client_request_task_and_wait_print(int timeout_ms = 5000);
