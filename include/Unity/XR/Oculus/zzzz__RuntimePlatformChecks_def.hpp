#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/RuntimePlatformChecks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimePlatformChecks)
// Forward declare root types
namespace Unity::XR::Oculus {
class RuntimePlatformChecks;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::RuntimePlatformChecks);
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.RuntimePlatformChecks
class CORDL_TYPE RuntimePlatformChecks : public ::System::Object {
public:
// Declarations
/// @brief Field isRuntimeUnsupportedPlatform, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isRuntimeUnsupportedPlatform, put=setStaticF_isRuntimeUnsupportedPlatform)) bool  isRuntimeUnsupportedPlatform;

/// @brief Method IsSupportedPlatform, addr 0x2f3c29c, size 0x60, virtual false, abstract: false, final false
static inline bool IsSupportedPlatform() ;

static inline bool getStaticF_isRuntimeUnsupportedPlatform() ;

static inline void setStaticF_isRuntimeUnsupportedPlatform(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimePlatformChecks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimePlatformChecks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimePlatformChecks(RuntimePlatformChecks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimePlatformChecks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimePlatformChecks(RuntimePlatformChecks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11373};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::RuntimePlatformChecks, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::RuntimePlatformChecks);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::RuntimePlatformChecks*, "Unity.XR.Oculus", "RuntimePlatformChecks");
