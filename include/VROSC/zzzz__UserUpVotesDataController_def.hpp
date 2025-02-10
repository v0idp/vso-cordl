#pragma once
// IWYU pragma private; include "VROSC/UserUpVotesDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__BaseDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UserUpVotesDataController)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class UserUpVotesDataController___c__DisplayClass10_0;
}
namespace VROSC {
class UserUpVotesDataController___c__DisplayClass11_0;
}
namespace VROSC {
class UserUpVotesDataController___c__DisplayClass8_0;
}
namespace VROSC {
class UserUpVotesDataModel_UpVote;
}
namespace VROSC {
class UserUpVotesDataModel;
}
// Forward declare root types
namespace VROSC {
class UserUpVotesDataController;
}
namespace VROSC {
class UserUpVotesDataController___c__DisplayClass10_0;
}
namespace VROSC {
class UserUpVotesDataController___c__DisplayClass11_0;
}
namespace VROSC {
class UserUpVotesDataController___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UserUpVotesDataController);
MARK_REF_PTR_T(::VROSC::UserUpVotesDataController___c__DisplayClass10_0);
MARK_REF_PTR_T(::VROSC::UserUpVotesDataController___c__DisplayClass11_0);
MARK_REF_PTR_T(::VROSC::UserUpVotesDataController___c__DisplayClass8_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserUpVotesDataController/<>c__DisplayClass10_0
class CORDL_TYPE UserUpVotesDataController___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserUpVotesDataController*  __4__this;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_1<::StringW>*  onSuccess;

/// @brief Field upVote, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_upVote, put=__cordl_internal_set_upVote)) ::VROSC::UserUpVotesDataModel_UpVote*  upVote;

static inline ::VROSC::UserUpVotesDataController___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <AddUpVoteToData>b__0, addr 0x187dc68, size 0xe0, virtual false, abstract: false, final false
inline void _AddUpVoteToData_b__0(::StringW  id) ;

constexpr ::VROSC::UserUpVotesDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserUpVotesDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onSuccess() ;

constexpr ::VROSC::UserUpVotesDataModel_UpVote* const& __cordl_internal_get_upVote() const;

constexpr ::VROSC::UserUpVotesDataModel_UpVote*& __cordl_internal_get_upVote() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserUpVotesDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_upVote(::VROSC::UserUpVotesDataModel_UpVote*  value) ;

/// @brief Method .ctor, addr 0x187dc58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserUpVotesDataController___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataController___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserUpVotesDataController___c__DisplayClass10_0(UserUpVotesDataController___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataController___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserUpVotesDataController___c__DisplayClass10_0(UserUpVotesDataController___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{571};

/// @brief Field upVote, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserUpVotesDataModel_UpVote*  ___upVote;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UserUpVotesDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserUpVotesDataController___c__DisplayClass10_0, ___upVote) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserUpVotesDataController___c__DisplayClass10_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserUpVotesDataController___c__DisplayClass10_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserUpVotesDataController___c__DisplayClass10_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserUpVotesDataController/<>c__DisplayClass11_0
class CORDL_TYPE UserUpVotesDataController___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserUpVotesDataController*  __4__this;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field upVote, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_upVote, put=__cordl_internal_set_upVote)) ::VROSC::UserUpVotesDataModel_UpVote*  upVote;

static inline ::VROSC::UserUpVotesDataController___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <RemoveUpVoteFromData>b__0, addr 0x187dd48, size 0x88, virtual false, abstract: false, final false
inline void _RemoveUpVoteFromData_b__0() ;

constexpr ::VROSC::UserUpVotesDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserUpVotesDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::VROSC::UserUpVotesDataModel_UpVote* const& __cordl_internal_get_upVote() const;

constexpr ::VROSC::UserUpVotesDataModel_UpVote*& __cordl_internal_get_upVote() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserUpVotesDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_upVote(::VROSC::UserUpVotesDataModel_UpVote*  value) ;

/// @brief Method .ctor, addr 0x187dc60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserUpVotesDataController___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataController___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserUpVotesDataController___c__DisplayClass11_0(UserUpVotesDataController___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataController___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserUpVotesDataController___c__DisplayClass11_0(UserUpVotesDataController___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{572};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserUpVotesDataController*  _____4__this;

/// @brief Field upVote, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UserUpVotesDataModel_UpVote*  ___upVote;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserUpVotesDataController___c__DisplayClass11_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserUpVotesDataController___c__DisplayClass11_0, ___upVote) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserUpVotesDataController___c__DisplayClass11_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserUpVotesDataController___c__DisplayClass11_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserUpVotesDataController/<>c__DisplayClass8_0
class CORDL_TYPE UserUpVotesDataController___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserUpVotesDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::UserUpVotesDataController___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <LoadCloudData>b__0, addr 0x187ddd0, size 0x49c, virtual false, abstract: false, final false
inline void _LoadCloudData_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  data) ;

constexpr ::VROSC::UserUpVotesDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserUpVotesDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserUpVotesDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x187dc4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserUpVotesDataController___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataController___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserUpVotesDataController___c__DisplayClass8_0(UserUpVotesDataController___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataController___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserUpVotesDataController___c__DisplayClass8_0(UserUpVotesDataController___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{573};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserUpVotesDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserUpVotesDataController___c__DisplayClass8_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserUpVotesDataController___c__DisplayClass8_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserUpVotesDataController___c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.BaseDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserUpVotesDataController
class CORDL_TYPE UserUpVotesDataController : public ::VROSC::BaseDataController {
public:
// Declarations
using __c__DisplayClass10_0 = ::VROSC::UserUpVotesDataController___c__DisplayClass10_0;

using __c__DisplayClass11_0 = ::VROSC::UserUpVotesDataController___c__DisplayClass11_0;

using __c__DisplayClass8_0 = ::VROSC::UserUpVotesDataController___c__DisplayClass8_0;

 __declspec(property(get=get_DataModel)) ::VROSC::UserUpVotesDataModel*  DataModel;

/// @brief Method AddUpVote, addr 0x187d21c, size 0x17c, virtual false, abstract: false, final false
inline void AddUpVote(::StringW  sessionId, ::StringW  sessionUpVoteId, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method AddUpVoteToData, addr 0x187d404, size 0x214, virtual false, abstract: false, final false
inline void AddUpVoteToData(::VROSC::UserUpVotesDataModel_UpVote*  upVote, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method GetUpVote, addr 0x187d70c, size 0x174, virtual false, abstract: false, final false
inline ::VROSC::UserUpVotesDataModel_UpVote* GetUpVote(::StringW  sessionId) ;

/// @brief Method GetUpVoteIdFromSession, addr 0x187dac8, size 0x68, virtual false, abstract: false, final false
inline ::StringW GetUpVoteIdFromSession(::StringW  sessionId) ;

/// @brief Method HasUpVote, addr 0x187d398, size 0x18, virtual false, abstract: false, final false
inline bool HasUpVote(::StringW  sessionId) ;

/// @brief Method LoadCloudData, addr 0x187db30, size 0x11c, virtual true, abstract: false, final false
inline void LoadCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::UserUpVotesDataController* New_ctor() ;

/// @brief Method RemoveLocalUpVoteWithId, addr 0x187d9b8, size 0x110, virtual false, abstract: false, final false
inline void RemoveLocalUpVoteWithId(::StringW  upVoteId) ;

/// @brief Method RemoveUpVote, addr 0x187d618, size 0xf4, virtual false, abstract: false, final false
inline void RemoveUpVote(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method RemoveUpVoteFromData, addr 0x187d880, size 0x138, virtual false, abstract: false, final false
inline void RemoveUpVoteFromData(::VROSC::UserUpVotesDataModel_UpVote*  upVote, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveCloudData, addr 0x187dc54, size 0x4, virtual true, abstract: false, final false
inline void SaveCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method .ctor, addr 0x187d140, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DataModel, addr 0x187d0c8, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::UserUpVotesDataModel* get_DataModel() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserUpVotesDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserUpVotesDataController(UserUpVotesDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserUpVotesDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserUpVotesDataController(UserUpVotesDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{574};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::UserUpVotesDataController, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UserUpVotesDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserUpVotesDataController*, "VROSC", "UserUpVotesDataController");
NEED_NO_BOX(::VROSC::UserUpVotesDataController___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserUpVotesDataController___c__DisplayClass10_0*, "VROSC", "UserUpVotesDataController/<>c__DisplayClass10_0");
NEED_NO_BOX(::VROSC::UserUpVotesDataController___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserUpVotesDataController___c__DisplayClass11_0*, "VROSC", "UserUpVotesDataController/<>c__DisplayClass11_0");
NEED_NO_BOX(::VROSC::UserUpVotesDataController___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserUpVotesDataController___c__DisplayClass8_0*, "VROSC", "UserUpVotesDataController/<>c__DisplayClass8_0");
