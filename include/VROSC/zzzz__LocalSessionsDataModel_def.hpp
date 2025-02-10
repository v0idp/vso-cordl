#pragma once
// IWYU pragma private; include "VROSC/LocalSessionsDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SessionsDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalSessionsDataModel)
// Forward declare root types
namespace VROSC {
class LocalSessionsDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LocalSessionsDataModel);
// Dependencies VROSC.SessionsDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LocalSessionsDataModel
class CORDL_TYPE LocalSessionsDataModel : public ::VROSC::SessionsDataModel {
public:
// Declarations
 __declspec(property(get=get_Key)) ::StringW  Key;

 __declspec(property(get=get_OldKey)) ::StringW  OldKey;

 __declspec(property(get=get_Version)) int32_t  Version;

static inline ::VROSC::LocalSessionsDataModel* New_ctor() ;

/// @brief Method .ctor, addr 0x1857fe8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x18595a4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_OldKey, addr 0x18593b4, size 0x40, virtual false, abstract: false, final false
inline ::StringW get_OldKey() ;

/// @brief Method get_Version, addr 0x18595e4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalSessionsDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalSessionsDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalSessionsDataModel(LocalSessionsDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalSessionsDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalSessionsDataModel(LocalSessionsDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LocalSessionsDataModel, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LocalSessionsDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LocalSessionsDataModel*, "VROSC", "LocalSessionsDataModel");
