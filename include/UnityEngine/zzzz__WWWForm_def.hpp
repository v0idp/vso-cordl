#pragma once
// IWYU pragma private; include "UnityEngine/WWWForm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WWWForm)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace UnityEngine {
class WWWForm;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WWWForm);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WWWForm
class CORDL_TYPE WWWForm : public ::System::Object {
public:
// Declarations
/// @brief Field ampersand, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ampersand, put=setStaticF_ampersand)) ::ArrayW<uint8_t,::Array<uint8_t>*>  ampersand;

/// @brief Field boundary, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_boundary, put=__cordl_internal_set_boundary)) ::ArrayW<uint8_t,::Array<uint8_t>*>  boundary;

/// @brief Field containsFiles, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_containsFiles, put=__cordl_internal_set_containsFiles)) bool  containsFiles;

/// @brief Field contentTypeHeader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_contentTypeHeader, put=setStaticF_contentTypeHeader)) ::ArrayW<uint8_t,::Array<uint8_t>*>  contentTypeHeader;

/// @brief Field crlf, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_crlf, put=setStaticF_crlf)) ::ArrayW<uint8_t,::Array<uint8_t>*>  crlf;

/// @brief Field dDash, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dDash, put=setStaticF_dDash)) ::ArrayW<uint8_t,::Array<uint8_t>*>  dDash;

 __declspec(property(get=get_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

/// @brief Field dispositionHeader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dispositionHeader, put=setStaticF_dispositionHeader)) ::ArrayW<uint8_t,::Array<uint8_t>*>  dispositionHeader;

/// @brief Field endQuote, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_endQuote, put=setStaticF_endQuote)) ::ArrayW<uint8_t,::Array<uint8_t>*>  endQuote;

/// @brief Field equal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_equal, put=setStaticF_equal)) ::ArrayW<uint8_t,::Array<uint8_t>*>  equal;

/// @brief Field fieldNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fieldNames, put=__cordl_internal_set_fieldNames)) ::System::Collections::Generic::List_1<::StringW>*  fieldNames;

/// @brief Field fileNameField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fileNameField, put=setStaticF_fileNameField)) ::ArrayW<uint8_t,::Array<uint8_t>*>  fileNameField;

/// @brief Field fileNames, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileNames, put=__cordl_internal_set_fileNames)) ::System::Collections::Generic::List_1<::StringW>*  fileNames;

/// @brief Field formData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_formData, put=__cordl_internal_set_formData)) ::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  formData;

 __declspec(property(get=get_headers)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers;

/// @brief Field types, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_types, put=__cordl_internal_set_types)) ::System::Collections::Generic::List_1<::StringW>*  types;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_boundary() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_boundary() ;

constexpr bool const& __cordl_internal_get_containsFiles() const;

constexpr bool& __cordl_internal_get_containsFiles() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_fieldNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_fieldNames() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_fileNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_fileNames() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* const& __cordl_internal_get_formData() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*& __cordl_internal_get_formData() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_types() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_types() ;

constexpr void __cordl_internal_set_boundary(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_containsFiles(bool  value) ;

constexpr void __cordl_internal_set_fieldNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_fileNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_formData(::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  value) ;

constexpr void __cordl_internal_set_types(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_ampersand() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_contentTypeHeader() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_crlf() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_dDash() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_dispositionHeader() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_endQuote() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_equal() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_fileNameField() ;

/// @brief Method get_DefaultEncoding, addr 0x3193704, size 0x8, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* get_DefaultEncoding() ;

/// @brief Method get_data, addr 0x3193858, size 0xd54, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_data() ;

/// @brief Method get_headers, addr 0x319370c, size 0x14c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_headers() ;

static inline void setStaticF_ampersand(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_contentTypeHeader(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_crlf(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_dDash(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_dispositionHeader(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_endQuote(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_equal(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_fileNameField(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WWWForm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WWWForm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WWWForm(WWWForm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WWWForm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WWWForm(WWWForm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11940};

/// @brief Field formData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  ___formData;

/// @brief Field fieldNames, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___fieldNames;

/// @brief Field fileNames, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___fileNames;

/// @brief Field types, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___types;

/// @brief Field boundary, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___boundary;

/// @brief Field containsFiles, offset: 0x38, size: 0x1, def value: None
 bool  ___containsFiles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::WWWForm, ___formData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WWWForm, ___fieldNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WWWForm, ___fileNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WWWForm, ___types) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WWWForm, ___boundary) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WWWForm, ___containsFiles) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::WWWForm, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::WWWForm);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WWWForm*, "UnityEngine", "WWWForm");
