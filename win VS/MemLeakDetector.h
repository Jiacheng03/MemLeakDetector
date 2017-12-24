#ifndef _MEM_LEAK_DETECTOR_H_
#define _MEM_LEAK_DETECTOR_H_

#ifdef _MSC_VER
#ifdef _DEBUG

#include <crtdbg.h> 
//#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)

namespace X
{
	class MemLeakDetector
	{
	public:		
		MemLeakDetector()
		{
			_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF); 
		}
		
		// 根据对象分配序号val，设置断点；		
		static long SetBreakAlloc(long val)
		{
			return _CrtSetBreakAlloc(val);
		}
	}mld;
}
#endif
#endif

#endif
