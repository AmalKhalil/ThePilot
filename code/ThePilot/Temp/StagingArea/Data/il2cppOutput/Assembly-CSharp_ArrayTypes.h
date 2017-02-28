#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// AssemblyCSharp.PixelBubble
struct PixelBubble_t3822309000;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_AssemblyCSharp_PixelBubble3822309000.h"
#include "AssemblyU2DCSharp_NodeListClass1817399820.h"

#pragma once
// AssemblyCSharp.PixelBubble[]
struct PixelBubbleU5BU5D_t2142486105  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) PixelBubble_t3822309000 * m_Items[1];

public:
	inline PixelBubble_t3822309000 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PixelBubble_t3822309000 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PixelBubble_t3822309000 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PixelBubble_t3822309000 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PixelBubble_t3822309000 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PixelBubble_t3822309000 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// NodeListClass[]
struct NodeListClassU5BU5D_t3572156485  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) NodeListClass_t1817399820  m_Items[1];

public:
	inline NodeListClass_t1817399820  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NodeListClass_t1817399820 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NodeListClass_t1817399820  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NodeListClass_t1817399820  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NodeListClass_t1817399820 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NodeListClass_t1817399820  value)
	{
		m_Items[index] = value;
	}
};
