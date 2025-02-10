#pragma once
// IWYU pragma private; include "VROSC/UserFavoritesDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__BaseDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UserFavoritesDataController)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class SessionUIData;
}
namespace VROSC {
class Session;
}
namespace VROSC {
class UserFavoritesDataController___c;
}
namespace VROSC {
class UserFavoritesDataController___c__DisplayClass12_0;
}
namespace VROSC {
class UserFavoritesDataController___c__DisplayClass13_0;
}
namespace VROSC {
class UserFavoritesDataController___c__DisplayClass9_0;
}
namespace VROSC {
class UserFavoritesDataModel_Favorite;
}
namespace VROSC {
class UserFavoritesDataModel;
}
// Forward declare root types
namespace VROSC {
class UserFavoritesDataController;
}
namespace VROSC {
class UserFavoritesDataController___c;
}
namespace VROSC {
class UserFavoritesDataController___c__DisplayClass12_0;
}
namespace VROSC {
class UserFavoritesDataController___c__DisplayClass13_0;
}
namespace VROSC {
class UserFavoritesDataController___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UserFavoritesDataController);
MARK_REF_PTR_T(::VROSC::UserFavoritesDataController___c);
MARK_REF_PTR_T(::VROSC::UserFavoritesDataController___c__DisplayClass12_0);
MARK_REF_PTR_T(::VROSC::UserFavoritesDataController___c__DisplayClass13_0);
MARK_REF_PTR_T(::VROSC::UserFavoritesDataController___c__DisplayClass9_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserFavoritesDataController/<>c
class CORDL_TYPE UserFavoritesDataController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::UserFavoritesDataController___c*  __9;

/// @brief Field <>9__9_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_2, put=setStaticF___9__9_2)) ::System::Func_2<::System::Object*,::StringW>*  __9__9_2;

static inline ::VROSC::UserFavoritesDataController___c* New_ctor() ;

/// @brief Method <LoadCloudData>b__9_2, addr 0x1877cc0, size 0x24, virtual false, abstract: false, final false
inline ::StringW _LoadCloudData_b__9_2(::System::Object*  x) ;

/// @brief Method .ctor, addr 0x1877cb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::UserFavoritesDataController___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Object*,::StringW>* getStaticF___9__9_2() ;

static inline void setStaticF___9(::VROSC::UserFavoritesDataController___c*  value) ;

static inline void setStaticF___9__9_2(::System::Func_2<::System::Object*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserFavoritesDataController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserFavoritesDataController___c(UserFavoritesDataController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserFavoritesDataController___c(UserFavoritesDataController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{556};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::UserFavoritesDataController___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserFavoritesDataController/<>c__DisplayClass12_0
class CORDL_TYPE UserFavoritesDataController___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserFavoritesDataController*  __4__this;

/// @brief Field favorite, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_favorite, put=__cordl_internal_set_favorite)) ::VROSC::UserFavoritesDataModel_Favorite*  favorite;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_1<::StringW>*  onSuccess;

static inline ::VROSC::UserFavoritesDataController___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <AddFavoriteToData>b__0, addr 0x1877ce4, size 0xe0, virtual false, abstract: false, final false
inline void _AddFavoriteToData_b__0(::StringW  id) ;

constexpr ::VROSC::UserFavoritesDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserFavoritesDataController*& __cordl_internal_get___4__this() ;

constexpr ::VROSC::UserFavoritesDataModel_Favorite* const& __cordl_internal_get_favorite() const;

constexpr ::VROSC::UserFavoritesDataModel_Favorite*& __cordl_internal_get_favorite() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserFavoritesDataController*  value) ;

constexpr void __cordl_internal_set_favorite(::VROSC::UserFavoritesDataModel_Favorite*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x1877c4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserFavoritesDataController___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataController___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserFavoritesDataController___c__DisplayClass12_0(UserFavoritesDataController___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataController___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserFavoritesDataController___c__DisplayClass12_0(UserFavoritesDataController___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{557};

/// @brief Field favorite, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserFavoritesDataModel_Favorite*  ___favorite;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UserFavoritesDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserFavoritesDataController___c__DisplayClass12_0, ___favorite) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserFavoritesDataController___c__DisplayClass12_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserFavoritesDataController___c__DisplayClass12_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserFavoritesDataController___c__DisplayClass12_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserFavoritesDataController/<>c__DisplayClass13_0
class CORDL_TYPE UserFavoritesDataController___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserFavoritesDataController*  __4__this;

/// @brief Field favorite, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_favorite, put=__cordl_internal_set_favorite)) ::VROSC::UserFavoritesDataModel_Favorite*  favorite;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::UserFavoritesDataController___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <RemoveFavoriteFromData>b__0, addr 0x1877dc4, size 0x88, virtual false, abstract: false, final false
inline void _RemoveFavoriteFromData_b__0() ;

constexpr ::VROSC::UserFavoritesDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserFavoritesDataController*& __cordl_internal_get___4__this() ;

constexpr ::VROSC::UserFavoritesDataModel_Favorite* const& __cordl_internal_get_favorite() const;

constexpr ::VROSC::UserFavoritesDataModel_Favorite*& __cordl_internal_get_favorite() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserFavoritesDataController*  value) ;

constexpr void __cordl_internal_set_favorite(::VROSC::UserFavoritesDataModel_Favorite*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1877c54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserFavoritesDataController___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataController___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserFavoritesDataController___c__DisplayClass13_0(UserFavoritesDataController___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataController___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserFavoritesDataController___c__DisplayClass13_0(UserFavoritesDataController___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{558};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserFavoritesDataController*  _____4__this;

/// @brief Field favorite, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UserFavoritesDataModel_Favorite*  ___favorite;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserFavoritesDataController___c__DisplayClass13_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserFavoritesDataController___c__DisplayClass13_0, ___favorite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserFavoritesDataController___c__DisplayClass13_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserFavoritesDataController___c__DisplayClass13_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserFavoritesDataController/<>c__DisplayClass9_0
class CORDL_TYPE UserFavoritesDataController___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserFavoritesDataController*  __4__this;

/// @brief Field onFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::UserFavoritesDataController___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <LoadCloudData>b__0, addr 0x1877e4c, size 0x13a8, virtual false, abstract: false, final false
inline void _LoadCloudData_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  data) ;

/// @brief Method <LoadCloudData>b__1, addr 0x18791f4, size 0x38, virtual false, abstract: false, final false
inline void _LoadCloudData_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::UserFavoritesDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserFavoritesDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserFavoritesDataController*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x18779ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserFavoritesDataController___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataController___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserFavoritesDataController___c__DisplayClass9_0(UserFavoritesDataController___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataController___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserFavoritesDataController___c__DisplayClass9_0(UserFavoritesDataController___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{559};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserFavoritesDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserFavoritesDataController___c__DisplayClass9_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserFavoritesDataController___c__DisplayClass9_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserFavoritesDataController___c__DisplayClass9_0, ___onFailure) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserFavoritesDataController___c__DisplayClass9_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.BaseDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserFavoritesDataController
class CORDL_TYPE UserFavoritesDataController : public ::VROSC::BaseDataController {
public:
// Declarations
using __c = ::VROSC::UserFavoritesDataController___c;

using __c__DisplayClass12_0 = ::VROSC::UserFavoritesDataController___c__DisplayClass12_0;

using __c__DisplayClass13_0 = ::VROSC::UserFavoritesDataController___c__DisplayClass13_0;

using __c__DisplayClass9_0 = ::VROSC::UserFavoritesDataController___c__DisplayClass9_0;

 __declspec(property(get=get_DataModel)) ::VROSC::UserFavoritesDataModel*  DataModel;

/// @brief Field _isWaitingForData, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isWaitingForData, put=__cordl_internal_set__isWaitingForData)) bool  _isWaitingForData;

/// @brief Method AddFavorite, addr 0x1876ed4, size 0x194, virtual false, abstract: false, final false
inline void AddFavorite(::StringW  sessionId, ::StringW  sessionFavoriteId, ::VROSC::Session*  session, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method AddFavoriteToData, addr 0x18770d4, size 0x214, virtual false, abstract: false, final false
inline void AddFavoriteToData(::VROSC::UserFavoritesDataModel_Favorite*  favorite, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method GetFavorite, addr 0x18773dc, size 0x174, virtual false, abstract: false, final false
inline ::VROSC::UserFavoritesDataModel_Favorite* GetFavorite(::StringW  sessionId) ;

/// @brief Method GetFavoriteIdFromSession, addr 0x1877798, size 0x68, virtual false, abstract: false, final false
inline ::StringW GetFavoriteIdFromSession(::StringW  sessionId) ;

/// @brief Method GetFavoritesSessionUIData, addr 0x18779f8, size 0x254, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* GetFavoritesSessionUIData() ;

/// @brief Method HasFavorite, addr 0x1877068, size 0x18, virtual false, abstract: false, final false
inline bool HasFavorite(::StringW  sessionId) ;

/// @brief Method LoadCloudData, addr 0x1877800, size 0x1ec, virtual true, abstract: false, final false
inline void LoadCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::UserFavoritesDataController* New_ctor() ;

/// @brief Method RemoveFavorite, addr 0x18772e8, size 0xf4, virtual false, abstract: false, final false
inline void RemoveFavorite(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method RemoveFavoriteFromData, addr 0x1877550, size 0x138, virtual false, abstract: false, final false
inline void RemoveFavoriteFromData(::VROSC::UserFavoritesDataModel_Favorite*  favorite, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method RemoveLocalFavoriteWithId, addr 0x1877688, size 0x110, virtual false, abstract: false, final false
inline void RemoveLocalFavoriteWithId(::StringW  favoriteId) ;

/// @brief Method SaveCloudData, addr 0x18779f4, size 0x4, virtual true, abstract: false, final false
inline void SaveCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

constexpr bool const& __cordl_internal_get__isWaitingForData() const;

constexpr bool& __cordl_internal_get__isWaitingForData() ;

constexpr void __cordl_internal_set__isWaitingForData(bool  value) ;

/// @brief Method .ctor, addr 0x1876df8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DataModel, addr 0x1876d80, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::UserFavoritesDataModel* get_DataModel() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserFavoritesDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserFavoritesDataController(UserFavoritesDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserFavoritesDataController(UserFavoritesDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{560};

/// @brief Field _isWaitingForData, offset: 0x28, size: 0x1, def value: None
 bool  ____isWaitingForData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserFavoritesDataController, ____isWaitingForData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserFavoritesDataController, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UserFavoritesDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserFavoritesDataController*, "VROSC", "UserFavoritesDataController");
NEED_NO_BOX(::VROSC::UserFavoritesDataController___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserFavoritesDataController___c*, "VROSC", "UserFavoritesDataController/<>c");
NEED_NO_BOX(::VROSC::UserFavoritesDataController___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserFavoritesDataController___c__DisplayClass12_0*, "VROSC", "UserFavoritesDataController/<>c__DisplayClass12_0");
NEED_NO_BOX(::VROSC::UserFavoritesDataController___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserFavoritesDataController___c__DisplayClass13_0*, "VROSC", "UserFavoritesDataController/<>c__DisplayClass13_0");
NEED_NO_BOX(::VROSC::UserFavoritesDataController___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserFavoritesDataController___c__DisplayClass9_0*, "VROSC", "UserFavoritesDataController/<>c__DisplayClass9_0");
