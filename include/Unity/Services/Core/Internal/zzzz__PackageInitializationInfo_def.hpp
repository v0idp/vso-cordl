#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/PackageInitializationInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PackageInitializationInfo)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class PackageInitializationInfo;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::PackageInitializationInfo);
// Dependencies System.Object
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.PackageInitializationInfo
class CORDL_TYPE PackageInitializationInfo : public ::System::Object {
public:
// Declarations
/// @brief Field InitializationTimeInSeconds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_InitializationTimeInSeconds, put=__cordl_internal_set_InitializationTimeInSeconds)) double_t  InitializationTimeInSeconds;

/// @brief Field PackageType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PackageType, put=__cordl_internal_set_PackageType)) ::System::Type*  PackageType;

static inline ::Unity::Services::Core::Internal::PackageInitializationInfo* New_ctor() ;

constexpr double_t const& __cordl_internal_get_InitializationTimeInSeconds() const;

constexpr double_t& __cordl_internal_get_InitializationTimeInSeconds() ;

constexpr ::System::Type* const& __cordl_internal_get_PackageType() const;

constexpr ::System::Type*& __cordl_internal_get_PackageType() ;

constexpr void __cordl_internal_set_InitializationTimeInSeconds(double_t  value) ;

constexpr void __cordl_internal_set_PackageType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x2e9f1b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PackageInitializationInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PackageInitializationInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PackageInitializationInfo(PackageInitializationInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PackageInitializationInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PackageInitializationInfo(PackageInitializationInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11999};

/// @brief Field PackageType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___PackageType;

/// @brief Field InitializationTimeInSeconds, offset: 0x18, size: 0x8, def value: None
 double_t  ___InitializationTimeInSeconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::PackageInitializationInfo, ___PackageType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::PackageInitializationInfo, ___InitializationTimeInSeconds) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::PackageInitializationInfo, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::PackageInitializationInfo);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::PackageInitializationInfo*, "Unity.Services.Core.Internal", "PackageInitializationInfo");
