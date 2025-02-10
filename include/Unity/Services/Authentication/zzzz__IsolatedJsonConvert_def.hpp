#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IsolatedJsonConvert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IsolatedJsonConvert)
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class IsolatedJsonConvert;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::IsolatedJsonConvert);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.IsolatedJsonConvert
class CORDL_TYPE IsolatedJsonConvert : public ::System::Object {
public:
// Declarations
/// @brief Method DeserializeObject, addr 0x2e99e50, size 0x200, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeObject(::StringW  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x2e99b64, size 0x28, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x2e99b8c, size 0x34, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObjectInternal, addr 0x2e99bc0, size 0x290, virtual false, abstract: false, final false
static inline ::StringW SerializeObjectInternal(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IsolatedJsonConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IsolatedJsonConvert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IsolatedJsonConvert(IsolatedJsonConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IsolatedJsonConvert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IsolatedJsonConvert(IsolatedJsonConvert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11585};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::IsolatedJsonConvert, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::IsolatedJsonConvert);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::IsolatedJsonConvert*, "Unity.Services.Authentication", "IsolatedJsonConvert");
