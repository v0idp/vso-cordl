#pragma once
// IWYU pragma private; include "Unity/Services/Core/Threading/Internal/UnityThreadUtilsInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "Unity/Services/Core/Threading/Internal/zzzz__IUnityThreadUtils_def.hpp"
CORDL_MODULE_EXPORT(UnityThreadUtilsInternal)
// Forward declare root types
namespace Unity::Services::Core::Threading::Internal {
class UnityThreadUtilsInternal;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal);
// Dependencies System.Object, Unity.Services.Core.Internal.IServiceComponent, Unity.Services.Core.Threading.Internal.IUnityThreadUtils
namespace Unity::Services::Core::Threading::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal
class CORDL_TYPE UnityThreadUtilsInternal : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Threading::Internal::IUnityThreadUtils"
constexpr operator  ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*() noexcept;

static inline ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* New_ctor() ;

/// @brief Method .ctor, addr 0x2ea710c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

/// @brief Convert to "::Unity::Services::Core::Threading::Internal::IUnityThreadUtils"
constexpr ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils* i___Unity__Services__Core__Threading__Internal__IUnityThreadUtils() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityThreadUtilsInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityThreadUtilsInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityThreadUtilsInternal(UnityThreadUtilsInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityThreadUtilsInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityThreadUtilsInternal(UnityThreadUtilsInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12533};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Threading::Internal
NEED_NO_BOX(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*, "Unity.Services.Core.Threading.Internal", "UnityThreadUtilsInternal");
