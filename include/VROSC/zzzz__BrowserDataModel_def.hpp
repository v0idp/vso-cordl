#pragma once
// IWYU pragma private; include "VROSC/BrowserDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ToolDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BrowserDataModel)
// Forward declare root types
namespace VROSC {
class BrowserDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BrowserDataModel);
// Dependencies VROSC.ToolDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BrowserDataModel
class CORDL_TYPE BrowserDataModel : public ::VROSC::ToolDataModel {
public:
// Declarations
 __declspec(property(get=get_Key)) ::StringW  Key;

 __declspec(property(get=get_Version)) int32_t  Version;

static inline ::VROSC::BrowserDataModel* New_ctor() ;

/// @brief Method .ctor, addr 0x18697a8, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x1869b7c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x1869bbc, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BrowserDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BrowserDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BrowserDataModel(BrowserDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BrowserDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BrowserDataModel(BrowserDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{514};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::BrowserDataModel, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BrowserDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BrowserDataModel*, "VROSC", "BrowserDataModel");
