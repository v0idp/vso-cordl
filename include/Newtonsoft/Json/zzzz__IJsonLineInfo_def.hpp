#pragma once
// IWYU pragma private; include "Newtonsoft/Json/IJsonLineInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IJsonLineInfo)
// Forward declare root types
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::IJsonLineInfo);
// Dependencies 
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.IJsonLineInfo
class CORDL_TYPE IJsonLineInfo {
public:
// Declarations
 __declspec(property(get=get_LineNumber)) int32_t  LineNumber;

 __declspec(property(get=get_LinePosition)) int32_t  LinePosition;

/// @brief Method HasLineInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool HasLineInfo() ;

/// @brief Method get_LineNumber, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_LineNumber() ;

/// @brief Method get_LinePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_LinePosition() ;

// Ctor Parameters [CppParam { name: "", ty: "IJsonLineInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJsonLineInfo(IJsonLineInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9658};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::IJsonLineInfo);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::IJsonLineInfo*, "Newtonsoft.Json", "IJsonLineInfo");
