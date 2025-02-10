#pragma once
// IWYU pragma private; include "VROSC/CommunitySessionsDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SessionsDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommunitySessionsDataModel)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace VROSC {
class Session;
}
// Forward declare root types
namespace VROSC {
class CommunitySessionsDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CommunitySessionsDataModel);
// Dependencies VROSC.SessionsDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsDataModel
class CORDL_TYPE CommunitySessionsDataModel : public ::VROSC::SessionsDataModel {
public:
// Declarations
/// @brief Field FavoriteSessions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FavoriteSessions, put=__cordl_internal_set_FavoriteSessions)) ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*  FavoriteSessions;

 __declspec(property(get=get_Key)) ::StringW  Key;

static inline ::VROSC::CommunitySessionsDataModel* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>* const& __cordl_internal_get_FavoriteSessions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*& __cordl_internal_get_FavoriteSessions() ;

constexpr void __cordl_internal_set_FavoriteSessions(::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*  value) ;

/// @brief Method .ctor, addr 0x1857d68, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x1857d28, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsDataModel(CommunitySessionsDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsDataModel(CommunitySessionsDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{468};

/// @brief Field FavoriteSessions, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*  ___FavoriteSessions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsDataModel, ___FavoriteSessions) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsDataModel, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CommunitySessionsDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsDataModel*, "VROSC", "CommunitySessionsDataModel");
