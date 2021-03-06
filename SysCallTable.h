struct SysCall{
	uint32_t (SYSCALL *pFunc)(struct VirtualMachine* pVM);
};

struct SysCall SysCallTable[] = {
	SysSetGlobalMemory,
	SysRegisterCallback,
	SysUnRegisterCallback,
	SysDispatchCallbacks,
	SysDebugOutput,
	SysGetTimer,
	SysSleep,
	SysFloatOperations,
	SysInteger64Operations,
	SysDoubleOperations,
	SysSetRender,
	SysRenderCreateTexture,
	SysRenderUpdateTexture,
	SysRenderClear,
	SysRenderSetTexture,
	SysRenderSwapBuffers,
	SysRenderDrawQuad,
	SysDecodeImage,
	SysFileManager,
};
