#pragma once
// IWYU pragma private; include "UnityEngine/TextAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextAsset)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Text {
class Encoding;
}
namespace UnityEngine {
class TextAsset_EncodingUtility;
}
// Forward declare root types
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class TextAsset_EncodingUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextAsset);
MARK_REF_PTR_T(::UnityEngine::TextAsset_EncodingUtility);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextAsset/EncodingUtility
class CORDL_TYPE TextAsset_EncodingUtility : public ::System::Object {
public:
// Declarations
/// @brief Field encodingLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_encodingLookup, put=setStaticF_encodingLookup)) ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>,::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>>*>  encodingLookup;

/// @brief Field targetEncoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_targetEncoding, put=setStaticF_targetEncoding)) ::System::Text::Encoding*  targetEncoding;

static inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>,::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>>*> getStaticF_encodingLookup() ;

static inline ::System::Text::Encoding* getStaticF_targetEncoding() ;

static inline void setStaticF_encodingLookup(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>,::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>>*>  value) ;

static inline void setStaticF_targetEncoding(::System::Text::Encoding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextAsset_EncodingUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextAsset_EncodingUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextAsset_EncodingUtility(TextAsset_EncodingUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextAsset_EncodingUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextAsset_EncodingUtility(TextAsset_EncodingUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8610};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAsset_EncodingUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextAsset
class CORDL_TYPE TextAsset : public ::UnityEngine::Object {
public:
// Declarations
using EncodingUtility = ::UnityEngine::TextAsset_EncodingUtility;

 __declspec(property(get=get_bytes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes;

 __declspec(property(get=get_text)) ::StringW  text;

/// @brief Method DecodeString, addr 0x2f8deb0, size 0x288, virtual false, abstract: false, final false
static inline ::StringW DecodeString(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method ToString, addr 0x2f8e138, size 0x4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_bytes, addr 0x2f8dde4, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_bytes() ;

/// @brief Method get_text, addr 0x2f8de20, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_text() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextAsset(TextAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextAsset(TextAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAsset, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::TextAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAsset*, "UnityEngine", "TextAsset");
NEED_NO_BOX(::UnityEngine::TextAsset_EncodingUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAsset_EncodingUtility*, "UnityEngine", "TextAsset/EncodingUtility");
