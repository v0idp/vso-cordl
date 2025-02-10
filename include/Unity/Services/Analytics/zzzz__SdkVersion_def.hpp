#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/SdkVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SdkVersion)
// Forward declare root types
namespace Unity::Services::Analytics {
class SdkVersion;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::SdkVersion);
// Dependencies System.Object
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.SdkVersion
class CORDL_TYPE SdkVersion : public ::System::Object {
public:
// Declarations
/// @brief Field SDK_VERSION, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SDK_VERSION, put=setStaticF_SDK_VERSION)) ::StringW  SDK_VERSION;

static inline ::StringW getStaticF_SDK_VERSION() ;

static inline void setStaticF_SDK_VERSION(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SdkVersion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SdkVersion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SdkVersion(SdkVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SdkVersion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SdkVersion(SdkVersion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11862};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::SdkVersion, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::SdkVersion);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::SdkVersion*, "Unity.Services.Analytics", "SdkVersion");
