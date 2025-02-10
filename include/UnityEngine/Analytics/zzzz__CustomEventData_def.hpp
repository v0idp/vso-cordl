#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/CustomEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomEventData)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class CustomEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::CustomEventData);
// Dependencies System.IDisposable, System.IntPtr, System.Object
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.CustomEventData
class CORDL_TYPE CustomEventData : public ::System::Object {
public:
// Declarations
/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddBool, addr 0x31911d0, size 0x54, virtual false, abstract: false, final false
inline bool AddBool(::StringW  key, bool  value) ;

/// @brief Method AddDictionary, addr 0x3191278, size 0x10cc, virtual false, abstract: false, final false
inline bool AddDictionary(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData) ;

/// @brief Method AddDouble, addr 0x3191224, size 0x54, virtual false, abstract: false, final false
inline bool AddDouble(::StringW  key, double_t  value) ;

/// @brief Method AddInt32, addr 0x3191080, size 0x54, virtual false, abstract: false, final false
inline bool AddInt32(::StringW  key, int32_t  value) ;

/// @brief Method AddInt64, addr 0x3191128, size 0x54, virtual false, abstract: false, final false
inline bool AddInt64(::StringW  key, int64_t  value) ;

/// @brief Method AddString, addr 0x319102c, size 0x54, virtual false, abstract: false, final false
inline bool AddString(::StringW  key, ::StringW  value) ;

/// @brief Method AddUInt32, addr 0x31910d4, size 0x54, virtual false, abstract: false, final false
inline bool AddUInt32(::StringW  key, uint32_t  value) ;

/// @brief Method AddUInt64, addr 0x319117c, size 0x54, virtual false, abstract: false, final false
inline bool AddUInt64(::StringW  key, uint64_t  value) ;

/// @brief Method Destroy, addr 0x3190f34, size 0x5c, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method Dispose, addr 0x3190fcc, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x3190ea0, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Internal_Create, addr 0x3190e5c, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_Create(::UnityEngine::Analytics::CustomEventData*  ced, ::StringW  name) ;

/// @brief Method Internal_Destroy, addr 0x3190f90, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Destroy(::System::IntPtr  ptr) ;

static inline ::UnityEngine::Analytics::CustomEventData* New_ctor(::StringW  name) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x3190e08, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomEventData(CustomEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomEventData(CustomEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12387};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::CustomEventData, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::CustomEventData, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::CustomEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::CustomEventData*, "UnityEngine.Analytics", "CustomEventData");
