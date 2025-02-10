#pragma once
// IWYU pragma private; include "Unity/Services/Core/UnityThreadUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityThreadUtils)
namespace System::Threading::Tasks {
class TaskScheduler;
}
// Forward declare root types
namespace Unity::Services::Core {
class UnityThreadUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::UnityThreadUtils);
// Dependencies System.Object
namespace Unity::Services::Core {
// Is value type: false
// CS Name: Unity.Services.Core.UnityThreadUtils
class CORDL_TYPE UnityThreadUtils : public ::System::Object {
public:
// Declarations
/// @brief Field <UnityThreadScheduler>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__UnityThreadScheduler_k__BackingField, put=setStaticF__UnityThreadScheduler_k__BackingField)) ::System::Threading::Tasks::TaskScheduler*  _UnityThreadScheduler_k__BackingField;

/// @brief Field s_UnityThreadId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_UnityThreadId, put=setStaticF_s_UnityThreadId)) int32_t  s_UnityThreadId;

/// @brief Method CaptureUnityThreadInfo, addr 0x2e9c51c, size 0xbc, virtual false, abstract: false, final false
static inline void CaptureUnityThreadInfo() ;

static inline ::System::Threading::Tasks::TaskScheduler* getStaticF__UnityThreadScheduler_k__BackingField() ;

static inline int32_t getStaticF_s_UnityThreadId() ;

/// @brief Method get_IsRunningOnUnityThread, addr 0x2e9c408, size 0x60, virtual false, abstract: false, final false
static inline bool get_IsRunningOnUnityThread() ;

static inline void setStaticF__UnityThreadScheduler_k__BackingField(::System::Threading::Tasks::TaskScheduler*  value) ;

static inline void setStaticF_s_UnityThreadId(int32_t  value) ;

/// @brief Method set_UnityThreadScheduler, addr 0x2e9c4d0, size 0x4c, virtual false, abstract: false, final false
static inline void set_UnityThreadScheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityThreadUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityThreadUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityThreadUtils(UnityThreadUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityThreadUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityThreadUtils(UnityThreadUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::UnityThreadUtils, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::UnityThreadUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::UnityThreadUtils*, "Unity.Services.Core", "UnityThreadUtils");
