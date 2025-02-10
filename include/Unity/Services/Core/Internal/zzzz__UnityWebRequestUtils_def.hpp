#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/UnityWebRequestUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestUtils)
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Unity::Services::Core::Internal {
class UnityWebRequestUtils___c__DisplayClass2_0;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class UnityWebRequestUtils;
}
namespace Unity::Services::Core::Internal {
class UnityWebRequestUtils___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::UnityWebRequestUtils);
MARK_REF_PTR_T(::Unity::Services::Core::Internal::UnityWebRequestUtils___c__DisplayClass2_0);
// Dependencies System.Object
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0
class CORDL_TYPE UnityWebRequestUtils___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field completionSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_completionSource, put=__cordl_internal_set_completionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  completionSource;

static inline ::Unity::Services::Core::Internal::UnityWebRequestUtils___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <GetTextAsync>g__CompleteFetchTaskOnRequestCompleted|0, addr 0x2ea3db8, size 0x3b8, virtual false, abstract: false, final false
inline void _GetTextAsync_g__CompleteFetchTaskOnRequestCompleted_0(::UnityEngine::AsyncOperation*  rawOperation) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* const& __cordl_internal_get_completionSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& __cordl_internal_get_completionSource() ;

constexpr void __cordl_internal_set_completionSource(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x2ea3db0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestUtils___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestUtils___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestUtils___c__DisplayClass2_0(UnityWebRequestUtils___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestUtils___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestUtils___c__DisplayClass2_0(UnityWebRequestUtils___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12016};

/// @brief Field completionSource, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  ___completionSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::UnityWebRequestUtils___c__DisplayClass2_0, ___completionSource) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::UnityWebRequestUtils___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies System.Object
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.UnityWebRequestUtils
class CORDL_TYPE UnityWebRequestUtils : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_0 = ::Unity::Services::Core::Internal::UnityWebRequestUtils___c__DisplayClass2_0;

/// @brief Method GetTextAsync, addr 0x2ea3c7c, size 0x134, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::StringW>* GetTextAsync(::StringW  uri) ;

/// @brief Method HasSucceeded, addr 0x2ea3c58, size 0x24, virtual false, abstract: false, final false
static inline bool HasSucceeded(::UnityEngine::Networking::UnityWebRequest*  self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestUtils(UnityWebRequestUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestUtils(UnityWebRequestUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12017};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::UnityWebRequestUtils, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::UnityWebRequestUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::UnityWebRequestUtils*, "Unity.Services.Core.Internal", "UnityWebRequestUtils");
NEED_NO_BOX(::Unity::Services::Core::Internal::UnityWebRequestUtils___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::UnityWebRequestUtils___c__DisplayClass2_0*, "Unity.Services.Core.Internal", "UnityWebRequestUtils/<>c__DisplayClass2_0");
