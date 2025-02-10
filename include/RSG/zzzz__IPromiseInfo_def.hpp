#pragma once
// IWYU pragma private; include "RSG/IPromiseInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPromiseInfo)
// Forward declare root types
namespace RSG {
class IPromiseInfo;
}
// Write type traits
MARK_REF_PTR_T(::RSG::IPromiseInfo);
// Dependencies 
namespace RSG {
// Is value type: false
// CS Name: RSG.IPromiseInfo
class CORDL_TYPE IPromiseInfo {
public:
// Declarations
 __declspec(property(get=get_Id)) int32_t  Id;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method get_Id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Id() ;

/// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

// Ctor Parameters [CppParam { name: "", ty: "IPromiseInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPromiseInfo(IPromiseInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1697};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
NEED_NO_BOX(::RSG::IPromiseInfo);
DEFINE_IL2CPP_ARG_TYPE(::RSG::IPromiseInfo*, "RSG", "IPromiseInfo");
