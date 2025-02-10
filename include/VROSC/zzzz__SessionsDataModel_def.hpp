#pragma once
// IWYU pragma private; include "VROSC/SessionsDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SessionsDataModel)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class Session;
}
// Forward declare root types
namespace VROSC {
class SessionsDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionsDataModel);
// Dependencies VROSC.BaseDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsDataModel
class CORDL_TYPE SessionsDataModel : public ::VROSC::BaseDataModel {
public:
// Declarations
/// @brief Field NewSessions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_NewSessions, put=__cordl_internal_set_NewSessions)) ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*  NewSessions;

/// @brief Field Sessions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sessions, put=__cordl_internal_set_Sessions)) ::System::Collections::Generic::List_1<::VROSC::Session*>*  Sessions;

static inline ::VROSC::SessionsDataModel* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>* const& __cordl_internal_get_NewSessions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*& __cordl_internal_get_NewSessions() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::Session*>* const& __cordl_internal_get_Sessions() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::Session*>*& __cordl_internal_get_Sessions() ;

constexpr void __cordl_internal_set_NewSessions(::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*  value) ;

constexpr void __cordl_internal_set_Sessions(::System::Collections::Generic::List_1<::VROSC::Session*>*  value) ;

/// @brief Method .ctor, addr 0x1857de0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsDataModel(SessionsDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsDataModel(SessionsDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{480};

/// @brief Field NewSessions, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*  ___NewSessions;

/// @brief Field Sessions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::Session*>*  ___Sessions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsDataModel, ___NewSessions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsDataModel, ___Sessions) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsDataModel, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionsDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsDataModel*, "VROSC", "SessionsDataModel");
