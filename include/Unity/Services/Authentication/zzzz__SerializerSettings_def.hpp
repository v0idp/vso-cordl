#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SerializerSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializerSettings)
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class SerializerSettings;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::SerializerSettings);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.SerializerSettings
class CORDL_TYPE SerializerSettings : public ::System::Object {
public:
// Declarations
/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::Newtonsoft::Json::JsonSerializerSettings*  s_Instance;

static inline ::Newtonsoft::Json::JsonSerializerSettings* getStaticF_s_Instance() ;

/// @brief Method get_DefaultSerializerSettings, addr 0x2e9769c, size 0x8c, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonSerializerSettings* get_DefaultSerializerSettings() ;

static inline void setStaticF_s_Instance(::Newtonsoft::Json::JsonSerializerSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializerSettings(SerializerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializerSettings(SerializerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11589};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::SerializerSettings, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::SerializerSettings);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::SerializerSettings*, "Unity.Services.Authentication", "SerializerSettings");
