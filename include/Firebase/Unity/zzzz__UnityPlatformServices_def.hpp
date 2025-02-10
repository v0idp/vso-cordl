#pragma once
// IWYU pragma private; include "Firebase/Unity/UnityPlatformServices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityPlatformServices)
// Forward declare root types
namespace Firebase::Unity {
class UnityPlatformServices;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Unity::UnityPlatformServices);
// Dependencies System.Object
namespace Firebase::Unity {
// Is value type: false
// CS Name: Firebase.Unity.UnityPlatformServices
class CORDL_TYPE UnityPlatformServices : public ::System::Object {
public:
// Declarations
/// @brief Method SetupServices, addr 0x191f844, size 0x188, virtual false, abstract: false, final false
static inline void SetupServices() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityPlatformServices() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityPlatformServices", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityPlatformServices(UnityPlatformServices && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityPlatformServices", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityPlatformServices(UnityPlatformServices const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12186};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Unity::UnityPlatformServices, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Unity
NEED_NO_BOX(::Firebase::Unity::UnityPlatformServices);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnityPlatformServices*, "Firebase.Unity", "UnityPlatformServices");
