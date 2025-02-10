#pragma once
// IWYU pragma private; include "VROSC/UserUpVotesDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__BaseDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserUpVotesDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class UserUpVotesDataModel_UpVote;
}
// Forward declare root types
namespace VROSC {
class UserUpVotesDataModel;
}
namespace VROSC {
class UserUpVotesDataModel_UpVote;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UserUpVotesDataModel);
MARK_REF_PTR_T(::VROSC::UserUpVotesDataModel_UpVote);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserUpVotesDataModel/UpVote
class CORDL_TYPE UserUpVotesDataModel_UpVote : public ::System::Object {
public:
// Declarations
/// @brief Field Date, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Date, put=__cordl_internal_set_Date)) ::StringW  Date;

/// @brief Field Id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field SessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::StringW  SessionId;

/// @brief Field SessionUpVoteId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionUpVoteId, put=__cordl_internal_set_SessionUpVoteId)) ::StringW  SessionUpVoteId;

static inline ::VROSC::UserUpVotesDataModel_UpVote* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Date() const;

constexpr ::StringW& __cordl_internal_get_Date() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr ::StringW const& __cordl_internal_get_SessionId() const;

constexpr ::StringW& __cordl_internal_get_SessionId() ;

constexpr ::StringW const& __cordl_internal_get_SessionUpVoteId() const;

constexpr ::StringW& __cordl_internal_get_SessionUpVoteId() ;

constexpr void __cordl_internal_set_Date(::StringW  value) ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_SessionId(::StringW  value) ;

constexpr void __cordl_internal_set_SessionUpVoteId(::StringW  value) ;

/// @brief Method .ctor, addr 0x187d3b0, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserUpVotesDataModel_UpVote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataModel_UpVote", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserUpVotesDataModel_UpVote(UserUpVotesDataModel_UpVote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataModel_UpVote", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserUpVotesDataModel_UpVote(UserUpVotesDataModel_UpVote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{575};

/// @brief Field Id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field SessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SessionId;

/// @brief Field SessionUpVoteId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___SessionUpVoteId;

/// @brief Field Date, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Date;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserUpVotesDataModel_UpVote, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserUpVotesDataModel_UpVote, ___SessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserUpVotesDataModel_UpVote, ___SessionUpVoteId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserUpVotesDataModel_UpVote, ___Date) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserUpVotesDataModel_UpVote, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.BaseDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserUpVotesDataModel
class CORDL_TYPE UserUpVotesDataModel : public ::VROSC::BaseDataModel {
public:
// Declarations
using UpVote = ::VROSC::UserUpVotesDataModel_UpVote;

 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field UpVotes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpVotes, put=__cordl_internal_set_UpVotes)) ::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel_UpVote*>*  UpVotes;

 __declspec(property(get=get_Version)) int32_t  Version;

static inline ::VROSC::UserUpVotesDataModel* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel_UpVote*>* const& __cordl_internal_get_UpVotes() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel_UpVote*>*& __cordl_internal_get_UpVotes() ;

constexpr void __cordl_internal_set_UpVotes(::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel_UpVote*>*  value) ;

/// @brief Method .ctor, addr 0x187d1a0, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x187e26c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x187e2ac, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserUpVotesDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserUpVotesDataModel(UserUpVotesDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserUpVotesDataModel(UserUpVotesDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{576};

/// @brief Field UpVotes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::UserUpVotesDataModel_UpVote*>*  ___UpVotes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserUpVotesDataModel, ___UpVotes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserUpVotesDataModel, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UserUpVotesDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserUpVotesDataModel*, "VROSC", "UserUpVotesDataModel");
NEED_NO_BOX(::VROSC::UserUpVotesDataModel_UpVote);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserUpVotesDataModel_UpVote*, "VROSC", "UserUpVotesDataModel/UpVote");
