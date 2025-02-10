#pragma once
// IWYU pragma private; include "VROSC/CloudSessionsDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SessionsDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CloudSessionsDataModel)
// Forward declare root types
namespace VROSC {
class CloudSessionsDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CloudSessionsDataModel);
// Dependencies VROSC.SessionsDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CloudSessionsDataModel
class CORDL_TYPE CloudSessionsDataModel : public ::VROSC::SessionsDataModel {
public:
// Declarations
 __declspec(property(get=get_Key)) ::StringW  Key;

static inline ::VROSC::CloudSessionsDataModel* New_ctor() ;

/// @brief Method .ctor, addr 0x18526f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x18546c4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudSessionsDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudSessionsDataModel(CloudSessionsDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudSessionsDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudSessionsDataModel(CloudSessionsDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{456};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::CloudSessionsDataModel, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CloudSessionsDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudSessionsDataModel*, "VROSC", "CloudSessionsDataModel");
