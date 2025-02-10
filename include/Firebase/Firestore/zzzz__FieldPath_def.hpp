#pragma once
// IWYU pragma private; include "Firebase/Firestore/FieldPath.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FieldPath)
namespace Firebase::Firestore {
class FieldPathProxy;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class FieldPath;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FieldPath);
// Dependencies System.IEquatable`1<T>, System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FieldPath
class CORDL_TYPE FieldPath : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EncodedPath)) ::StringW  EncodedPath;

/// @brief Field <DocumentId>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__DocumentId_k__BackingField, put=setStaticF__DocumentId_k__BackingField)) ::Firebase::Firestore::FieldPath*  _DocumentId_k__BackingField;

/// @brief Field <>f__am$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache0, put=setStaticF___f__am$cache0)) ::System::Func_2<::StringW,bool>*  __f__am$cache0;

/// @brief Field _encodedPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__encodedPath, put=__cordl_internal_set__encodedPath)) ::StringW  _encodedPath;

/// @brief Field _segments, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__segments, put=__cordl_internal_set__segments)) ::ArrayW<::StringW,::Array<::StringW>*>  _segments;

/// @brief Field dotSplit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dotSplit, put=setStaticF_dotSplit)) ::ArrayW<char16_t,::Array<char16_t>*>  dotSplit;

/// @brief Field prohibitedCharacters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_prohibitedCharacters, put=setStaticF_prohibitedCharacters)) ::ArrayW<char16_t,::Array<char16_t>*>  prohibitedCharacters;

/// @brief Convert operator to "::System::IEquatable_1<::Firebase::Firestore::FieldPath*>"
constexpr operator  ::System::IEquatable_1<::Firebase::Firestore::FieldPath*>*() noexcept;

/// @brief Method ConvertToProxy, addr 0x191cc20, size 0xdc, virtual false, abstract: false, final false
inline ::Firebase::Firestore::FieldPathProxy* ConvertToProxy() ;

/// @brief Method Equals, addr 0x191cb5c, size 0x64, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x191cbc0, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::Firebase::Firestore::FieldPath*  other) ;

/// @brief Method FromDotSeparatedString, addr 0x191c8f4, size 0x19c, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldPath* FromDotSeparatedString(::StringW  path) ;

/// @brief Method GetCanonicalPath, addr 0x191c70c, size 0x1e8, virtual false, abstract: false, final false
static inline ::StringW GetCanonicalPath(::ArrayW<::StringW,::Array<::StringW>*>  fields) ;

/// @brief Method GetHashCode, addr 0x191cc00, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValidIdentifier, addr 0x191ca90, size 0xc8, virtual false, abstract: false, final false
static inline bool IsValidIdentifier(::StringW  identifier) ;

static inline ::Firebase::Firestore::FieldPath* New_ctor(::ArrayW<::StringW,::Array<::StringW>*>  segments, bool  trusted) ;

/// @brief Method ToString, addr 0x191cb58, size 0x4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method <FieldPath>m__0, addr 0x191ce2c, size 0x1c, virtual false, abstract: false, final false
static inline bool _FieldPath_m__0(::StringW  n) ;

constexpr ::StringW const& __cordl_internal_get__encodedPath() const;

constexpr ::StringW& __cordl_internal_get__encodedPath() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get__segments() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get__segments() ;

constexpr void __cordl_internal_set__encodedPath(::StringW  value) ;

constexpr void __cordl_internal_set__segments(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method .ctor, addr 0x191c4cc, size 0x1d8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW,::Array<::StringW>*>  segments, bool  trusted) ;

static inline ::Firebase::Firestore::FieldPath* getStaticF__DocumentId_k__BackingField() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___f__am$cache0() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_dotSplit() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_prohibitedCharacters() ;

/// @brief Method get_EncodedPath, addr 0x191c6a4, size 0x68, virtual false, abstract: false, final false
inline ::StringW get_EncodedPath() ;

/// @brief Convert to "::System::IEquatable_1<::Firebase::Firestore::FieldPath*>"
constexpr ::System::IEquatable_1<::Firebase::Firestore::FieldPath*>* i___System__IEquatable_1___Firebase__Firestore__FieldPath__() noexcept;

static inline void setStaticF__DocumentId_k__BackingField(::Firebase::Firestore::FieldPath*  value) ;

static inline void setStaticF___f__am$cache0(::System::Func_2<::StringW,bool>*  value) ;

static inline void setStaticF_dotSplit(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF_prohibitedCharacters(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FieldPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FieldPath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FieldPath(FieldPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FieldPath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FieldPath(FieldPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11216};

/// @brief Field _segments, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ____segments;

/// @brief Field _encodedPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____encodedPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FieldPath, ____segments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FieldPath, ____encodedPath) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FieldPath, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FieldPath);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FieldPath*, "Firebase.Firestore", "FieldPath");
