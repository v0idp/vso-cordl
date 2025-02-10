#pragma once
// IWYU pragma private; include "VROSC/Session.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Session)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class Session_Contributor;
}
namespace VROSC {
struct Session_PreviewSource;
}
// Forward declare root types
namespace VROSC {
struct Session_PreviewSource;
}
namespace VROSC {
class Session;
}
namespace VROSC {
class Session_Contributor;
}
// Write type traits
MARK_VAL_T(::VROSC::Session_PreviewSource);
MARK_REF_PTR_T(::VROSC::Session);
MARK_REF_PTR_T(::VROSC::Session_Contributor);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.Session/PreviewSource
struct CORDL_TYPE Session_PreviewSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Session_PreviewSource_Unwrapped
enum struct __Session_PreviewSource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Looper = static_cast<int32_t>(0x1),
__E_TapeRecorder = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Session_PreviewSource_Unwrapped () const noexcept {
return static_cast<__Session_PreviewSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Session_PreviewSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Session_PreviewSource(int32_t  value__) noexcept;

/// @brief Field Looper value: I32(1)
static ::VROSC::Session_PreviewSource const Looper;

/// @brief Field None value: I32(0)
static ::VROSC::Session_PreviewSource const None;

/// @brief Field TapeRecorder value: I32(2)
static ::VROSC::Session_PreviewSource const TapeRecorder;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{475};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Session_PreviewSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Session_PreviewSource, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Session/Contributor
class CORDL_TYPE Session_Contributor : public ::System::Object {
public:
// Declarations
/// @brief Field Date, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Date, put=__cordl_internal_set_Date)) ::StringW  Date;

/// @brief Field SessionId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::StringW  SessionId;

/// @brief Field UserId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserId, put=__cordl_internal_set_UserId)) ::StringW  UserId;

/// @brief Field UserName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserName, put=__cordl_internal_set_UserName)) ::StringW  UserName;

static inline ::VROSC::Session_Contributor* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Date() const;

constexpr ::StringW& __cordl_internal_get_Date() ;

constexpr ::StringW const& __cordl_internal_get_SessionId() const;

constexpr ::StringW& __cordl_internal_get_SessionId() ;

constexpr ::StringW const& __cordl_internal_get_UserId() const;

constexpr ::StringW& __cordl_internal_get_UserId() ;

constexpr ::StringW const& __cordl_internal_get_UserName() const;

constexpr ::StringW& __cordl_internal_get_UserName() ;

constexpr void __cordl_internal_set_Date(::StringW  value) ;

constexpr void __cordl_internal_set_SessionId(::StringW  value) ;

constexpr void __cordl_internal_set_UserId(::StringW  value) ;

constexpr void __cordl_internal_set_UserName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1859cc0, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Session_Contributor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Session_Contributor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Session_Contributor(Session_Contributor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Session_Contributor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Session_Contributor(Session_Contributor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{476};

/// @brief Field UserId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___UserId;

/// @brief Field UserName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___UserName;

/// @brief Field SessionId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___SessionId;

/// @brief Field Date, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Date;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Session_Contributor, ___UserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session_Contributor, ___UserName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session_Contributor, ___SessionId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session_Contributor, ___Date) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Session_Contributor, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.Session::PreviewSource
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Session
class CORDL_TYPE Session : public ::System::Object {
public:
// Declarations
using Contributor = ::VROSC::Session_Contributor;

using PreviewSource = ::VROSC::Session_PreviewSource;

/// @brief Field AuthorName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthorName, put=__cordl_internal_set_AuthorName)) ::StringW  AuthorName;

/// @brief Field Contributors, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_Contributors, put=__cordl_internal_set_Contributors)) ::System::Collections::Generic::List_1<::VROSC::Session_Contributor*>*  Contributors;

/// @brief Field Date, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Date, put=__cordl_internal_set_Date)) ::StringW  Date;

/// @brief Field Description, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Description, put=__cordl_internal_set_Description)) ::StringW  Description;

/// @brief Field DisplayName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field DownloadsCount, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_DownloadsCount, put=__cordl_internal_set_DownloadsCount)) int32_t  DownloadsCount;

/// @brief Field FavoritesCount, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_FavoritesCount, put=__cordl_internal_set_FavoritesCount)) int32_t  FavoritesCount;

/// @brief Field HasPositionalData, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasPositionalData, put=__cordl_internal_set_HasPositionalData)) bool  HasPositionalData;

/// @brief Field HasPreview, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasPreview, put=__cordl_internal_set_HasPreview)) bool  HasPreview;

/// @brief Field PlatformName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlatformName, put=__cordl_internal_set_PlatformName)) ::StringW  PlatformName;

/// @brief Field Popularity, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Popularity, put=__cordl_internal_set_Popularity)) double_t  Popularity;

/// @brief Field PreviewNormalizeMultiplier, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviewNormalizeMultiplier, put=__cordl_internal_set_PreviewNormalizeMultiplier)) float_t  PreviewNormalizeMultiplier;

/// @brief Field PreviewPlaysCount, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviewPlaysCount, put=__cordl_internal_set_PreviewPlaysCount)) int32_t  PreviewPlaysCount;

/// @brief Field PreviewType, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviewType, put=__cordl_internal_set_PreviewType)) ::VROSC::Session_PreviewSource  PreviewType;

/// @brief Field SessionId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::StringW  SessionId;

/// @brief Field SessionName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionName, put=__cordl_internal_set_SessionName)) ::StringW  SessionName;

/// @brief Field Tags, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tags, put=__cordl_internal_set_Tags)) ::System::Collections::Generic::List_1<::StringW>*  Tags;

/// @brief Field TrackCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_TrackCount, put=__cordl_internal_set_TrackCount)) int32_t  TrackCount;

/// @brief Field UpVotesCount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpVotesCount, put=__cordl_internal_set_UpVotesCount)) int32_t  UpVotesCount;

/// @brief Field Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) int32_t  Version;

/// @brief Method Clone, addr 0x185add4, size 0x28c, virtual false, abstract: false, final false
inline ::VROSC::Session* Clone() ;

static inline ::VROSC::Session* New_ctor() ;

/// @brief Method SetHasPreview, addr 0x185a8cc, size 0x14, virtual false, abstract: false, final false
inline void SetHasPreview(bool  hasPreview, float_t  multiplier, ::VROSC::Session_PreviewSource  previewSource) ;

constexpr ::StringW const& __cordl_internal_get_AuthorName() const;

constexpr ::StringW& __cordl_internal_get_AuthorName() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::Session_Contributor*>* const& __cordl_internal_get_Contributors() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::Session_Contributor*>*& __cordl_internal_get_Contributors() ;

constexpr ::StringW const& __cordl_internal_get_Date() const;

constexpr ::StringW& __cordl_internal_get_Date() ;

constexpr ::StringW const& __cordl_internal_get_Description() const;

constexpr ::StringW& __cordl_internal_get_Description() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr int32_t const& __cordl_internal_get_DownloadsCount() const;

constexpr int32_t& __cordl_internal_get_DownloadsCount() ;

constexpr int32_t const& __cordl_internal_get_FavoritesCount() const;

constexpr int32_t& __cordl_internal_get_FavoritesCount() ;

constexpr bool const& __cordl_internal_get_HasPositionalData() const;

constexpr bool& __cordl_internal_get_HasPositionalData() ;

constexpr bool const& __cordl_internal_get_HasPreview() const;

constexpr bool& __cordl_internal_get_HasPreview() ;

constexpr ::StringW const& __cordl_internal_get_PlatformName() const;

constexpr ::StringW& __cordl_internal_get_PlatformName() ;

constexpr double_t const& __cordl_internal_get_Popularity() const;

constexpr double_t& __cordl_internal_get_Popularity() ;

constexpr float_t const& __cordl_internal_get_PreviewNormalizeMultiplier() const;

constexpr float_t& __cordl_internal_get_PreviewNormalizeMultiplier() ;

constexpr int32_t const& __cordl_internal_get_PreviewPlaysCount() const;

constexpr int32_t& __cordl_internal_get_PreviewPlaysCount() ;

constexpr ::VROSC::Session_PreviewSource const& __cordl_internal_get_PreviewType() const;

constexpr ::VROSC::Session_PreviewSource& __cordl_internal_get_PreviewType() ;

constexpr ::StringW const& __cordl_internal_get_SessionId() const;

constexpr ::StringW& __cordl_internal_get_SessionId() ;

constexpr ::StringW const& __cordl_internal_get_SessionName() const;

constexpr ::StringW& __cordl_internal_get_SessionName() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Tags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Tags() ;

constexpr int32_t const& __cordl_internal_get_TrackCount() const;

constexpr int32_t& __cordl_internal_get_TrackCount() ;

constexpr int32_t const& __cordl_internal_get_UpVotesCount() const;

constexpr int32_t& __cordl_internal_get_UpVotesCount() ;

constexpr int32_t const& __cordl_internal_get_Version() const;

constexpr int32_t& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_AuthorName(::StringW  value) ;

constexpr void __cordl_internal_set_Contributors(::System::Collections::Generic::List_1<::VROSC::Session_Contributor*>*  value) ;

constexpr void __cordl_internal_set_Date(::StringW  value) ;

constexpr void __cordl_internal_set_Description(::StringW  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_DownloadsCount(int32_t  value) ;

constexpr void __cordl_internal_set_FavoritesCount(int32_t  value) ;

constexpr void __cordl_internal_set_HasPositionalData(bool  value) ;

constexpr void __cordl_internal_set_HasPreview(bool  value) ;

constexpr void __cordl_internal_set_PlatformName(::StringW  value) ;

constexpr void __cordl_internal_set_Popularity(double_t  value) ;

constexpr void __cordl_internal_set_PreviewNormalizeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_PreviewPlaysCount(int32_t  value) ;

constexpr void __cordl_internal_set_PreviewType(::VROSC::Session_PreviewSource  value) ;

constexpr void __cordl_internal_set_SessionId(::StringW  value) ;

constexpr void __cordl_internal_set_SessionName(::StringW  value) ;

constexpr void __cordl_internal_set_Tags(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TrackCount(int32_t  value) ;

constexpr void __cordl_internal_set_UpVotesCount(int32_t  value) ;

constexpr void __cordl_internal_set_Version(int32_t  value) ;

/// @brief Method .ctor, addr 0x1858574, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Session() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Session", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Session(Session && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Session", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Session(Session const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{477};

/// @brief Field Version, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Version;

/// @brief Field SessionName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SessionName;

/// @brief Field SessionId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___SessionId;

/// @brief Field DisplayName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field AuthorName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___AuthorName;

/// @brief Field PlatformName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___PlatformName;

/// @brief Field Date, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Date;

/// @brief Field TrackCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___TrackCount;

/// @brief Field HasPreview, offset: 0x4c, size: 0x1, def value: None
 bool  ___HasPreview;

/// @brief Field PreviewNormalizeMultiplier, offset: 0x50, size: 0x4, def value: None
 float_t  ___PreviewNormalizeMultiplier;

/// @brief Field PreviewType, offset: 0x54, size: 0x4, def value: None
 ::VROSC::Session_PreviewSource  ___PreviewType;

/// @brief Field Description, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___Description;

/// @brief Field UpVotesCount, offset: 0x60, size: 0x4, def value: None
 int32_t  ___UpVotesCount;

/// @brief Field FavoritesCount, offset: 0x64, size: 0x4, def value: None
 int32_t  ___FavoritesCount;

/// @brief Field DownloadsCount, offset: 0x68, size: 0x4, def value: None
 int32_t  ___DownloadsCount;

/// @brief Field PreviewPlaysCount, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___PreviewPlaysCount;

/// @brief Field Popularity, offset: 0x70, size: 0x8, def value: None
 double_t  ___Popularity;

/// @brief Field Tags, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Tags;

/// @brief Field Contributors, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::Session_Contributor*>*  ___Contributors;

/// @brief Field HasPositionalData, offset: 0x88, size: 0x1, def value: None
 bool  ___HasPositionalData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Session, ___Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___SessionName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___SessionId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___DisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___AuthorName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___PlatformName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___Date) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___TrackCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___HasPreview) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___PreviewNormalizeMultiplier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___PreviewType) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___Description) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___UpVotesCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___FavoritesCount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___DownloadsCount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___PreviewPlaysCount) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___Popularity) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___Tags) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___Contributors) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::Session, ___HasPositionalData) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Session, 0x90>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Session_PreviewSource, "VROSC", "Session/PreviewSource");
NEED_NO_BOX(::VROSC::Session);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Session*, "VROSC", "Session");
NEED_NO_BOX(::VROSC::Session_Contributor);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Session_Contributor*, "VROSC", "Session/Contributor");
