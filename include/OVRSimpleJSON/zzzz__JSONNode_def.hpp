#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONContainerType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNode)
namespace OVRSimpleJSON {
struct Enumerator_JSONNode_Type;
}
namespace OVRSimpleJSON {
class JSONArray;
}
namespace OVRSimpleJSON {
struct JSONContainerType;
}
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace OVRSimpleJSON {
struct JSONNode_Enumerator;
}
namespace OVRSimpleJSON {
struct JSONNode_KeyEnumerator;
}
namespace OVRSimpleJSON {
class JSONNode_LinqEnumerator;
}
namespace OVRSimpleJSON {
struct JSONNode_ValueEnumerator;
}
namespace OVRSimpleJSON {
class JSONNode__get_Children_d__43;
}
namespace OVRSimpleJSON {
class JSONNode__get_DeepChildren_d__45;
}
namespace OVRSimpleJSON {
class JSONObject;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct Dictionary_2_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
struct List_1_Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace OVRSimpleJSON {
struct Enumerator_JSONNode_Type;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace OVRSimpleJSON {
class JSONNode_LinqEnumerator;
}
namespace OVRSimpleJSON {
class JSONNode__get_Children_d__43;
}
namespace OVRSimpleJSON {
class JSONNode__get_DeepChildren_d__45;
}
namespace OVRSimpleJSON {
struct JSONNode_Enumerator;
}
namespace OVRSimpleJSON {
struct JSONNode_KeyEnumerator;
}
namespace OVRSimpleJSON {
struct JSONNode_ValueEnumerator;
}
// Write type traits
MARK_VAL_T(::OVRSimpleJSON::Enumerator_JSONNode_Type);
MARK_REF_PTR_T(::OVRSimpleJSON::JSONNode);
MARK_REF_PTR_T(::OVRSimpleJSON::JSONNode_LinqEnumerator);
MARK_REF_PTR_T(::OVRSimpleJSON::JSONNode__get_Children_d__43);
MARK_REF_PTR_T(::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45);
MARK_VAL_T(::OVRSimpleJSON::JSONNode_Enumerator);
MARK_VAL_T(::OVRSimpleJSON::JSONNode_KeyEnumerator);
MARK_VAL_T(::OVRSimpleJSON::JSONNode_ValueEnumerator);
// Dependencies 
namespace OVRSimpleJSON {
// Is value type: true
// CS Name: OVRSimpleJSON.JSONNode/Enumerator/Type
struct CORDL_TYPE Enumerator_JSONNode_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Enumerator_JSONNode_Type_Unwrapped
enum struct __Enumerator_JSONNode_Type_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Array = static_cast<int32_t>(0x1),
__E_Object = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Enumerator_JSONNode_Type_Unwrapped () const noexcept {
return static_cast<__Enumerator_JSONNode_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Enumerator_JSONNode_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Enumerator_JSONNode_Type(int32_t  value__) noexcept;

/// @brief Field Array value: I32(1)
static ::OVRSimpleJSON::Enumerator_JSONNode_Type const Array;

/// @brief Field None value: I32(0)
static ::OVRSimpleJSON::Enumerator_JSONNode_Type const None;

/// @brief Field Object value: I32(2)
static ::OVRSimpleJSON::Enumerator_JSONNode_Type const Object;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6763};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::Enumerator_JSONNode_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::Enumerator_JSONNode_Type, 0x4>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
// Dependencies OVRSimpleJSON.JSONNode::Enumerator::Type, System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.List`1::Enumerator<T>
namespace OVRSimpleJSON {
// Is value type: true
// CS Name: OVRSimpleJSON.JSONNode/Enumerator
struct CORDL_TYPE JSONNode_Enumerator {
public:
// Declarations
using Type = ::OVRSimpleJSON::Enumerator_JSONNode_Type;

 __declspec(property(get=get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>  Current;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Method MoveNext, addr 0x295c960, size 0x94, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0x295c840, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  aArrayEnum) ;

/// @brief Method .ctor, addr 0x295c86c, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  aDictEnum) ;

/// @brief Method get_Current, addr 0x295c890, size 0xd0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*> get_Current() ;

/// @brief Method get_IsValid, addr 0x295c830, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

// Ctor Parameters []
// @brief default ctor
constexpr JSONNode_Enumerator() ;

// Ctor Parameters [CppParam { name: "type", ty: "::OVRSimpleJSON::Enumerator_JSONNode_Type", modifiers: "", def_value: None }, CppParam { name: "m_Object", ty: "::System::Collections::Generic::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: None }, CppParam { name: "m_Array", ty: "::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: None }]
constexpr JSONNode_Enumerator(::OVRSimpleJSON::Enumerator_JSONNode_Type  type, ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  m_Object, ::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  m_Array) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6764};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::OVRSimpleJSON::Enumerator_JSONNode_Type  type;

/// @brief Field m_Object, offset: 0x8, size: 0x28, def value: None
 ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  m_Object;

/// @brief Field m_Array, offset: 0x30, size: 0x18, def value: None
 ::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  m_Array;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::JSONNode_Enumerator, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNode_Enumerator, m_Object) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNode_Enumerator, m_Array) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONNode_Enumerator, 0x48>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
// Dependencies OVRSimpleJSON.JSONNode::Enumerator
namespace OVRSimpleJSON {
// Is value type: true
// CS Name: OVRSimpleJSON.JSONNode/ValueEnumerator
struct CORDL_TYPE JSONNode_ValueEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::OVRSimpleJSON::JSONNode*  Current;

/// @brief Method GetEnumerator, addr 0x295cb00, size 0x10, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode_ValueEnumerator GetEnumerator() ;

/// @brief Method MoveNext, addr 0x295cafc, size 0x4, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0x295c9f4, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  aArrayEnum) ;

/// @brief Method .ctor, addr 0x295ca34, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  aDictEnum) ;

/// @brief Method .ctor, addr 0x295caa4, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::OVRSimpleJSON::JSONNode_Enumerator  aEnumerator) ;

/// @brief Method get_Current, addr 0x295cab8, size 0x44, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr JSONNode_ValueEnumerator() ;

// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::OVRSimpleJSON::JSONNode_Enumerator", modifiers: "", def_value: None }]
constexpr JSONNode_ValueEnumerator(::OVRSimpleJSON::JSONNode_Enumerator  m_Enumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6765};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field m_Enumerator, offset: 0x0, size: 0x48, def value: None
 ::OVRSimpleJSON::JSONNode_Enumerator  m_Enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::JSONNode_ValueEnumerator, m_Enumerator) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONNode_ValueEnumerator, 0x48>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
// Dependencies OVRSimpleJSON.JSONNode::Enumerator
namespace OVRSimpleJSON {
// Is value type: true
// CS Name: OVRSimpleJSON.JSONNode/KeyEnumerator
struct CORDL_TYPE JSONNode_KeyEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::StringW  Current;

/// @brief Method GetEnumerator, addr 0x295cc14, size 0x10, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode_KeyEnumerator GetEnumerator() ;

/// @brief Method MoveNext, addr 0x295cc10, size 0x4, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method .ctor, addr 0x295cb10, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>  aArrayEnum) ;

/// @brief Method .ctor, addr 0x295cb50, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>  aDictEnum) ;

/// @brief Method .ctor, addr 0x295cbc0, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::OVRSimpleJSON::JSONNode_Enumerator  aEnumerator) ;

/// @brief Method get_Current, addr 0x295cbd4, size 0x3c, virtual false, abstract: false, final false
inline ::StringW get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr JSONNode_KeyEnumerator() ;

// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::OVRSimpleJSON::JSONNode_Enumerator", modifiers: "", def_value: None }]
constexpr JSONNode_KeyEnumerator(::OVRSimpleJSON::JSONNode_Enumerator  m_Enumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6766};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field m_Enumerator, offset: 0x0, size: 0x48, def value: None
 ::OVRSimpleJSON::JSONNode_Enumerator  m_Enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::JSONNode_KeyEnumerator, m_Enumerator) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONNode_KeyEnumerator, 0x48>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
// Dependencies OVRSimpleJSON.JSONNode::Enumerator, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: OVRSimpleJSON.JSONNode/LinqEnumerator
class CORDL_TYPE JSONNode_LinqEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field m_Enumerator, offset 0x18, size 0x48 
 __declspec(property(get=__cordl_internal_get_m_Enumerator, put=__cordl_internal_set_m_Enumerator)) ::OVRSimpleJSON::JSONNode_Enumerator  m_Enumerator;

/// @brief Field m_Node, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Node, put=__cordl_internal_set_m_Node)) ::OVRSimpleJSON::JSONNode*  m_Node;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x295cc98, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0x295ccac, size 0x5c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>* GetEnumerator() ;

/// @brief Method MoveNext, addr 0x295cc90, size 0x8, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::OVRSimpleJSON::JSONNode_LinqEnumerator* New_ctor(::OVRSimpleJSON::JSONNode*  aNode) ;

/// @brief Method Reset, addr 0x295cd08, size 0xac, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x295cdb4, size 0x5c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x295cc2c, size 0x64, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr ::OVRSimpleJSON::JSONNode_Enumerator const& __cordl_internal_get_m_Enumerator() const;

constexpr ::OVRSimpleJSON::JSONNode_Enumerator& __cordl_internal_get_m_Enumerator() ;

constexpr ::OVRSimpleJSON::JSONNode* const& __cordl_internal_get_m_Node() const;

constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get_m_Node() ;

constexpr void __cordl_internal_set_m_Enumerator(::OVRSimpleJSON::JSONNode_Enumerator  value) ;

constexpr void __cordl_internal_set_m_Node(::OVRSimpleJSON::JSONNode*  value) ;

/// @brief Method .ctor, addr 0x2957dd0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::OVRSimpleJSON::JSONNode*  aNode) ;

/// @brief Method get_Current, addr 0x295cc24, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*> get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___OVRSimpleJSON__JSONNode___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>* i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___OVRSimpleJSON__JSONNode___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JSONNode_LinqEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JSONNode_LinqEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JSONNode_LinqEnumerator(JSONNode_LinqEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSONNode_LinqEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSONNode_LinqEnumerator(JSONNode_LinqEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6767};

/// @brief Field m_Node, offset: 0x10, size: 0x8, def value: None
 ::OVRSimpleJSON::JSONNode*  ___m_Node;

/// @brief Field m_Enumerator, offset: 0x18, size: 0x48, def value: None
 ::OVRSimpleJSON::JSONNode_Enumerator  ___m_Enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::JSONNode_LinqEnumerator, ___m_Node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNode_LinqEnumerator, ___m_Enumerator) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONNode_LinqEnumerator, 0x60>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: OVRSimpleJSON.JSONNode/<get_Children>d__43
class CORDL_TYPE JSONNode__get_Children_d__43 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)) ::OVRSimpleJSON::JSONNode*  System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::OVRSimpleJSON::JSONNode*  __2__current;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x295ce14, size 0x18, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::OVRSimpleJSON::JSONNode__get_Children_d__43* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator, addr 0x295ce74, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current, addr 0x295ce2c, size 0x8, virtual true, abstract: false, final true
inline ::OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x295cf04, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x295ce34, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x295ce6c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x295ce10, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::OVRSimpleJSON::JSONNode* const& __cordl_internal_get___2__current() const;

constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::OVRSimpleJSON::JSONNode*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method .ctor, addr 0x2957b6c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* i___System__Collections__Generic__IEnumerable_1___OVRSimpleJSON__JSONNode__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* i___System__Collections__Generic__IEnumerator_1___OVRSimpleJSON__JSONNode__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JSONNode__get_Children_d__43() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JSONNode__get_Children_d__43", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JSONNode__get_Children_d__43(JSONNode__get_Children_d__43 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSONNode__get_Children_d__43", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSONNode__get_Children_d__43(JSONNode__get_Children_d__43 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6768};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::OVRSimpleJSON::JSONNode*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::JSONNode__get_Children_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNode__get_Children_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNode__get_Children_d__43, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONNode__get_Children_d__43, 0x28>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: OVRSimpleJSON.JSONNode/<get_DeepChildren>d__45
class CORDL_TYPE JSONNode__get_DeepChildren_d__45 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)) ::OVRSimpleJSON::JSONNode*  System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::OVRSimpleJSON::JSONNode*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::OVRSimpleJSON::JSONNode*  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x295cfb8, size 0x430, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator, addr 0x295d590, size 0x9c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current, addr 0x295d548, size 0x8, virtual true, abstract: false, final true
inline ::OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x295d62c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x295d550, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x295d588, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x295cf08, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::OVRSimpleJSON::JSONNode* const& __cordl_internal_get___2__current() const;

constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get___2__current() ;

constexpr ::OVRSimpleJSON::JSONNode* const& __cordl_internal_get___4__this() const;

constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*& __cordl_internal_get___7__wrap1() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::OVRSimpleJSON::JSONNode*  value) ;

constexpr void __cordl_internal_set___4__this(::OVRSimpleJSON::JSONNode*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0x295d498, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0x295d3e8, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// @brief Method .ctor, addr 0x2957c10, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* i___System__Collections__Generic__IEnumerable_1___OVRSimpleJSON__JSONNode__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* i___System__Collections__Generic__IEnumerator_1___OVRSimpleJSON__JSONNode__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JSONNode__get_DeepChildren_d__45() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JSONNode__get_DeepChildren_d__45", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JSONNode__get_DeepChildren_d__45(JSONNode__get_DeepChildren_d__45 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSONNode__get_DeepChildren_d__45", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSONNode__get_DeepChildren_d__45(JSONNode__get_DeepChildren_d__45 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6769};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::OVRSimpleJSON::JSONNode*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::OVRSimpleJSON::JSONNode*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45, _____7__wrap2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45, 0x40>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
// Dependencies OVRSimpleJSON.JSONContainerType, System.Object
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: OVRSimpleJSON.JSONNode
class CORDL_TYPE JSONNode : public ::System::Object {
public:
// Declarations
using Enumerator = ::OVRSimpleJSON::JSONNode_Enumerator;

using KeyEnumerator = ::OVRSimpleJSON::JSONNode_KeyEnumerator;

using LinqEnumerator = ::OVRSimpleJSON::JSONNode_LinqEnumerator;

using ValueEnumerator = ::OVRSimpleJSON::JSONNode_ValueEnumerator;

using _get_Children_d__43 = ::OVRSimpleJSON::JSONNode__get_Children_d__43;

using _get_DeepChildren_d__45 = ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45;

 __declspec(property(get=get_AsArray)) ::OVRSimpleJSON::JSONArray*  AsArray;

 __declspec(property(get=get_AsBool, put=set_AsBool)) bool  AsBool;

 __declspec(property(get=get_AsDouble, put=set_AsDouble)) double_t  AsDouble;

 __declspec(property(get=get_AsFloat, put=set_AsFloat)) float_t  AsFloat;

 __declspec(property(get=get_AsInt, put=set_AsInt)) int32_t  AsInt;

 __declspec(property(get=get_AsLong, put=set_AsLong)) int64_t  AsLong;

 __declspec(property(get=get_AsObject)) ::OVRSimpleJSON::JSONObject*  AsObject;

 __declspec(property(get=get_AsULong, put=set_AsULong)) uint64_t  AsULong;

 __declspec(property(get=get_Children)) ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*  Children;

/// @brief Field ColorContainerType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ColorContainerType, put=setStaticF_ColorContainerType)) ::OVRSimpleJSON::JSONContainerType  ColorContainerType;

/// @brief Field ColorDefaultAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ColorDefaultAlpha, put=setStaticF_ColorDefaultAlpha)) float_t  ColorDefaultAlpha;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_DeepChildren)) ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*  DeepChildren;

 __declspec(property(get=get_Inline, put=set_Inline)) bool  Inline;

 __declspec(property(get=get_IsArray)) bool  IsArray;

 __declspec(property(get=get_IsBoolean)) bool  IsBoolean;

 __declspec(property(get=get_IsNull)) bool  IsNull;

 __declspec(property(get=get_IsNumber)) bool  IsNumber;

 __declspec(property(get=get_IsObject)) bool  IsObject;

 __declspec(property(get=get_IsString)) bool  IsString;

 __declspec(property(get=get_Item, put=set_Item)) ::OVRSimpleJSON::JSONNode*  Item[];

 __declspec(property(get=get_Item, put=set_Item)) ::OVRSimpleJSON::JSONNode*  Item[];

 __declspec(property(get=get_Keys)) ::OVRSimpleJSON::JSONNode_KeyEnumerator  Keys;

 __declspec(property(get=get_Linq)) ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>*  Linq;

/// @brief Field QuaternionContainerType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_QuaternionContainerType, put=setStaticF_QuaternionContainerType)) ::OVRSimpleJSON::JSONContainerType  QuaternionContainerType;

/// @brief Field RectContainerType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_RectContainerType, put=setStaticF_RectContainerType)) ::OVRSimpleJSON::JSONContainerType  RectContainerType;

 __declspec(property(get=get_Tag)) ::OVRSimpleJSON::JSONNodeType  Tag;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

 __declspec(property(get=get_Values)) ::OVRSimpleJSON::JSONNode_ValueEnumerator  Values;

/// @brief Field VectorContainerType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_VectorContainerType, put=setStaticF_VectorContainerType)) ::OVRSimpleJSON::JSONContainerType  VectorContainerType;

/// @brief Field allowLineComments, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_allowLineComments, put=setStaticF_allowLineComments)) bool  allowLineComments;

/// @brief Field forceASCII, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_forceASCII, put=setStaticF_forceASCII)) bool  forceASCII;

/// @brief Field longAsString, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_longAsString, put=setStaticF_longAsString)) bool  longAsString;

/// @brief Field m_EscapeBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_EscapeBuilder, put=setStaticF_m_EscapeBuilder)) ::System::Text::StringBuilder*  m_EscapeBuilder;

/// @brief Method Add, addr 0x2957a7c, size 0x64, virtual true, abstract: false, final false
inline void Add(::OVRSimpleJSON::JSONNode*  aItem) ;

/// @brief Method Add, addr 0x2957a78, size 0x4, virtual true, abstract: false, final false
inline void Add(::StringW  aKey, ::OVRSimpleJSON::JSONNode*  aItem) ;

/// @brief Method Clear, addr 0x2957af8, size 0x4, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0x2957afc, size 0x8, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* Clone() ;

/// @brief Method Equals, addr 0x29590d4, size 0xc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Escape, addr 0x29591ac, size 0x2f0, virtual false, abstract: false, final false
static inline ::StringW Escape(::StringW  aText) ;

/// @brief Method GetContainer, addr 0x2959fac, size 0x80, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* GetContainer(::OVRSimpleJSON::JSONContainerType  aType) ;

/// @brief Method GetEnumerator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode_Enumerator GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x29590e0, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetValueOrDefault, addr 0x2957c4c, size 0x8, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* GetValueOrDefault(::StringW  aKey, ::OVRSimpleJSON::JSONNode*  aDefault) ;

/// @brief Method HasKey, addr 0x2957c44, size 0x8, virtual true, abstract: false, final false
inline bool HasKey(::StringW  aKey) ;

static inline ::OVRSimpleJSON::JSONNode* New_ctor() ;

/// @brief Method Parse, addr 0x2959684, size 0x7e8, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* Parse(::StringW  aJSON) ;

/// @brief Method ParseElement, addr 0x295949c, size 0x1e8, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* ParseElement(::StringW  token, bool  quoted) ;

/// @brief Method ReadColor, addr 0x295b484, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Color ReadColor() ;

/// @brief Method ReadColor, addr 0x295bcb8, size 0x298, virtual false, abstract: false, final false
inline ::UnityEngine::Color ReadColor(::UnityEngine::Color  aDefault) ;

/// @brief Method ReadMatrix, addr 0x295c648, size 0xd8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 ReadMatrix() ;

/// @brief Method ReadQuaternion, addr 0x295b4a8, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion ReadQuaternion() ;

/// @brief Method ReadQuaternion, addr 0x295bf50, size 0x230, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion ReadQuaternion(::UnityEngine::Quaternion  aDefault) ;

/// @brief Method ReadRect, addr 0x295b51c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Rect ReadRect() ;

/// @brief Method ReadRect, addr 0x295c180, size 0x230, virtual false, abstract: false, final false
inline ::UnityEngine::Rect ReadRect(::UnityEngine::Rect  aDefault) ;

/// @brief Method ReadRectOffset, addr 0x295b540, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::RectOffset* ReadRectOffset() ;

/// @brief Method ReadRectOffset, addr 0x295c3b0, size 0x298, virtual false, abstract: false, final false
inline ::UnityEngine::RectOffset* ReadRectOffset(::UnityEngine::RectOffset*  aDefault) ;

/// @brief Method ReadVector2, addr 0x295b34c, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ReadVector2() ;

/// @brief Method ReadVector2, addr 0x295b59c, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ReadVector2(::UnityEngine::Vector2  aDefault) ;

/// @brief Method ReadVector2, addr 0x295b6dc, size 0xd8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ReadVector2(::StringW  aXName, ::StringW  aYName) ;

/// @brief Method ReadVector3, addr 0x295b3ac, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ReadVector3() ;

/// @brief Method ReadVector3, addr 0x295b7b4, size 0x1bc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ReadVector3(::UnityEngine::Vector3  aDefault) ;

/// @brief Method ReadVector3, addr 0x295b970, size 0x118, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ReadVector3(::StringW  aXName, ::StringW  aYName, ::StringW  aZName) ;

/// @brief Method ReadVector4, addr 0x295b410, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 ReadVector4() ;

/// @brief Method ReadVector4, addr 0x295ba88, size 0x230, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 ReadVector4(::UnityEngine::Vector4  aDefault) ;

/// @brief Method Remove, addr 0x2957ae8, size 0x8, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* Remove(int32_t  aIndex) ;

/// @brief Method Remove, addr 0x2957ae0, size 0x8, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* Remove(::StringW  aKey) ;

/// @brief Method Remove, addr 0x2957af0, size 0x8, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* Remove(::OVRSimpleJSON::JSONNode*  aNode) ;

/// @brief Method ToString, addr 0x2957c54, size 0x8c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x2957ce0, size 0x98, virtual true, abstract: false, final false
inline ::StringW ToString(int32_t  aIndent) ;

/// @brief Method WriteColor, addr 0x295a7f4, size 0x250, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* WriteColor(::UnityEngine::Color  aCol) ;

/// @brief Method WriteMatrix, addr 0x295c720, size 0xac, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* WriteMatrix(::UnityEngine::Matrix4x4  aMatrix) ;

/// @brief Method WriteQuaternion, addr 0x295aad8, size 0x250, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* WriteQuaternion(::UnityEngine::Quaternion  aRot) ;

/// @brief Method WriteRect, addr 0x295adbc, size 0x250, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* WriteRect(::UnityEngine::Rect  aRect) ;

/// @brief Method WriteRectOffset, addr 0x295b078, size 0x2c4, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* WriteRectOffset(::UnityEngine::RectOffset*  aRect) ;

/// @brief Method WriteToStringBuilder, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WriteToStringBuilder(::System::Text::StringBuilder*  aSB, int32_t  aIndent, int32_t  aIndentInc, ::OVRSimpleJSON::JSONTextMode  aMode) ;

/// @brief Method WriteVector2, addr 0x295a0d8, size 0x130, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* WriteVector2(::UnityEngine::Vector2  aVec, ::StringW  aXName, ::StringW  aYName) ;

/// @brief Method WriteVector3, addr 0x295a2dc, size 0x1a0, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* WriteVector3(::UnityEngine::Vector3  aVec, ::StringW  aXName, ::StringW  aYName, ::StringW  aZName) ;

/// @brief Method WriteVector4, addr 0x295a510, size 0x250, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* WriteVector4(::UnityEngine::Vector4  aVec) ;

/// @brief Method .ctor, addr 0x295c7cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::OVRSimpleJSON::JSONContainerType getStaticF_ColorContainerType() ;

static inline float_t getStaticF_ColorDefaultAlpha() ;

static inline ::OVRSimpleJSON::JSONContainerType getStaticF_QuaternionContainerType() ;

static inline ::OVRSimpleJSON::JSONContainerType getStaticF_RectContainerType() ;

static inline ::OVRSimpleJSON::JSONContainerType getStaticF_VectorContainerType() ;

static inline bool getStaticF_allowLineComments() ;

static inline bool getStaticF_forceASCII() ;

static inline bool getStaticF_longAsString() ;

static inline ::System::Text::StringBuilder* getStaticF_m_EscapeBuilder() ;

/// @brief Method get_AsArray, addr 0x2958438, size 0x78, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONArray* get_AsArray() ;

/// @brief Method get_AsBool, addr 0x29580b8, size 0xb8, virtual true, abstract: false, final false
inline bool get_AsBool() ;

/// @brief Method get_AsDouble, addr 0x2957f0c, size 0xa4, virtual true, abstract: false, final false
inline double_t get_AsDouble() ;

/// @brief Method get_AsFloat, addr 0x2958084, size 0x20, virtual true, abstract: false, final false
inline float_t get_AsFloat() ;

/// @brief Method get_AsInt, addr 0x2958038, size 0x34, virtual true, abstract: false, final false
inline int32_t get_AsInt() ;

/// @brief Method get_AsLong, addr 0x29581e8, size 0xa0, virtual true, abstract: false, final false
inline int64_t get_AsLong() ;

/// @brief Method get_AsObject, addr 0x29584b0, size 0x78, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONObject* get_AsObject() ;

/// @brief Method get_AsULong, addr 0x2958310, size 0xa0, virtual true, abstract: false, final false
inline uint64_t get_AsULong() ;

/// @brief Method get_Children, addr 0x2957b04, size 0x68, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* get_Children() ;

/// @brief Method get_Count, addr 0x2957a34, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_DeepChildren, addr 0x2957ba0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* get_DeepChildren() ;

/// @brief Method get_EscapeBuilder, addr 0x29590e8, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* get_EscapeBuilder() ;

/// @brief Method get_Inline, addr 0x2957a6c, size 0x8, virtual true, abstract: false, final false
inline bool get_Inline() ;

/// @brief Method get_IsArray, addr 0x2957a5c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsArray() ;

/// @brief Method get_IsBoolean, addr 0x2957a4c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsBoolean() ;

/// @brief Method get_IsNull, addr 0x2957a54, size 0x8, virtual true, abstract: false, final false
inline bool get_IsNull() ;

/// @brief Method get_IsNumber, addr 0x2957a3c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsNumber() ;

/// @brief Method get_IsObject, addr 0x2957a64, size 0x8, virtual true, abstract: false, final false
inline bool get_IsObject() ;

/// @brief Method get_IsString, addr 0x2957a44, size 0x8, virtual true, abstract: false, final false
inline bool get_IsString() ;

/// @brief Method get_Item, addr 0x29579d8, size 0x8, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* get_Item(int32_t  aIndex) ;

/// @brief Method get_Item, addr 0x29579e4, size 0x8, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode* get_Item(::StringW  aKey) ;

/// @brief Method get_Keys, addr 0x2957e94, size 0x3c, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode_KeyEnumerator get_Keys() ;

/// @brief Method get_Linq, addr 0x2957d78, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>* get_Linq() ;

/// @brief Method get_Tag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONNodeType get_Tag() ;

/// @brief Method get_Value, addr 0x29579f0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method get_Values, addr 0x2957ed0, size 0x3c, virtual false, abstract: false, final false
inline ::OVRSimpleJSON::JSONNode_ValueEnumerator get_Values() ;

/// @brief Method op_Equality, addr 0x295872c, size 0x170, virtual false, abstract: false, final false
static inline bool op_Equality(::OVRSimpleJSON::JSONNode*  a, ::System::Object*  b) ;

/// @brief Method op_Implicit, addr 0x295a760, size 0x94, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Color  aCol) ;

/// @brief Method op_Implicit, addr 0x2959028, size 0x3c, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>  aKeyValue) ;

/// @brief Method op_Implicit, addr 0x295ad28, size 0x94, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Rect  aRect) ;

/// @brief Method op_Implicit, addr 0x295b00c, size 0x6c, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::RectOffset*  aRect) ;

/// @brief Method op_Implicit, addr 0x295aa44, size 0x94, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Quaternion  aRot) ;

/// @brief Method op_Implicit, addr 0x295a02c, size 0xac, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector2  aVec) ;

/// @brief Method op_Implicit, addr 0x295a208, size 0xd4, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector3  aVec) ;

/// @brief Method op_Implicit, addr 0x295a47c, size 0x94, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector4  aVec) ;

/// @brief Method op_Implicit, addr 0x2958ed8, size 0x58, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(bool  b) ;

/// @brief Method op_Implicit, addr 0x295889c, size 0x60, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(double_t  n) ;

/// @brief Method op_Implicit, addr 0x29589f0, size 0x60, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(float_t  n) ;

/// @brief Method op_Implicit, addr 0x2958ad8, size 0x58, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(int32_t  n) ;

/// @brief Method op_Implicit, addr 0x2958bb8, size 0x108, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(int64_t  n) ;

/// @brief Method op_Implicit, addr 0x2958d48, size 0x108, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(uint64_t  n) ;

/// @brief Method op_Implicit, addr 0x2958528, size 0x8c, virtual false, abstract: false, final false
static inline ::OVRSimpleJSON::JSONNode* op_Implicit___OVRSimpleJSON__JSONNode_(::StringW  s) ;

/// @brief Method op_Implicit, addr 0x29586a8, size 0x84, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::OVRSimpleJSON::JSONNode*  d) ;

/// @brief Method op_Implicit, addr 0x295b464, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::OVRSimpleJSON::JSONNode*  aNode) ;

/// @brief Method op_Implicit, addr 0x295b498, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::OVRSimpleJSON::JSONNode*  aNode) ;

/// @brief Method op_Implicit, addr 0x295b4fc, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect op_Implicit___UnityEngine__Rect(::OVRSimpleJSON::JSONNode*  aNode) ;

/// @brief Method op_Implicit, addr 0x295b530, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::RectOffset* op_Implicit___UnityEngine__RectOffset_(::OVRSimpleJSON::JSONNode*  aNode) ;

/// @brief Method op_Implicit, addr 0x295b33c, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::OVRSimpleJSON::JSONNode*  aNode) ;

/// @brief Method op_Implicit, addr 0x295b39c, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::OVRSimpleJSON::JSONNode*  aNode) ;

/// @brief Method op_Implicit, addr 0x295b400, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::OVRSimpleJSON::JSONNode*  aNode) ;

/// @brief Method op_Implicit, addr 0x2958fa0, size 0x88, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::OVRSimpleJSON::JSONNode*  d) ;

/// @brief Method op_Implicit, addr 0x2958968, size 0x88, virtual false, abstract: false, final false
static inline double_t op_Implicit_double_t(::OVRSimpleJSON::JSONNode*  d) ;

/// @brief Method op_Implicit, addr 0x2958a50, size 0x88, virtual false, abstract: false, final false
static inline float_t op_Implicit_float_t(::OVRSimpleJSON::JSONNode*  d) ;

/// @brief Method op_Implicit, addr 0x2958b30, size 0x88, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::OVRSimpleJSON::JSONNode*  d) ;

/// @brief Method op_Implicit, addr 0x2958cc0, size 0x88, virtual false, abstract: false, final false
static inline int64_t op_Implicit_int64_t(::OVRSimpleJSON::JSONNode*  d) ;

/// @brief Method op_Implicit, addr 0x2958e50, size 0x88, virtual false, abstract: false, final false
static inline uint64_t op_Implicit_uint64_t(::OVRSimpleJSON::JSONNode*  d) ;

/// @brief Method op_Inequality, addr 0x2959064, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::OVRSimpleJSON::JSONNode*  a, ::System::Object*  b) ;

static inline void setStaticF_ColorContainerType(::OVRSimpleJSON::JSONContainerType  value) ;

static inline void setStaticF_ColorDefaultAlpha(float_t  value) ;

static inline void setStaticF_QuaternionContainerType(::OVRSimpleJSON::JSONContainerType  value) ;

static inline void setStaticF_RectContainerType(::OVRSimpleJSON::JSONContainerType  value) ;

static inline void setStaticF_VectorContainerType(::OVRSimpleJSON::JSONContainerType  value) ;

static inline void setStaticF_allowLineComments(bool  value) ;

static inline void setStaticF_forceASCII(bool  value) ;

static inline void setStaticF_longAsString(bool  value) ;

static inline void setStaticF_m_EscapeBuilder(::System::Text::StringBuilder*  value) ;

/// @brief Method set_AsBool, addr 0x2958170, size 0x78, virtual true, abstract: false, final false
inline void set_AsBool(bool  value) ;

/// @brief Method set_AsDouble, addr 0x2957fb0, size 0x88, virtual true, abstract: false, final false
inline void set_AsDouble(double_t  value) ;

/// @brief Method set_AsFloat, addr 0x29580a4, size 0x14, virtual true, abstract: false, final false
inline void set_AsFloat(float_t  value) ;

/// @brief Method set_AsInt, addr 0x295806c, size 0x18, virtual true, abstract: false, final false
inline void set_AsInt(int32_t  value) ;

/// @brief Method set_AsLong, addr 0x2958288, size 0x88, virtual true, abstract: false, final false
inline void set_AsLong(int64_t  value) ;

/// @brief Method set_AsULong, addr 0x29583b0, size 0x88, virtual true, abstract: false, final false
inline void set_AsULong(uint64_t  value) ;

/// @brief Method set_Inline, addr 0x2957a74, size 0x4, virtual true, abstract: false, final false
inline void set_Inline(bool  value) ;

/// @brief Method set_Item, addr 0x29579e0, size 0x4, virtual true, abstract: false, final false
inline void set_Item(int32_t  aIndex, ::OVRSimpleJSON::JSONNode*  value) ;

/// @brief Method set_Item, addr 0x29579ec, size 0x4, virtual true, abstract: false, final false
inline void set_Item(::StringW  aKey, ::OVRSimpleJSON::JSONNode*  value) ;

/// @brief Method set_Value, addr 0x2957a30, size 0x4, virtual true, abstract: false, final false
inline void set_Value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JSONNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JSONNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JSONNode(JSONNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSONNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSONNode(JSONNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6770};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONNode, 0x10>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::Enumerator_JSONNode_Type, "OVRSimpleJSON", "JSONNode/Enumerator/Type");
NEED_NO_BOX(::OVRSimpleJSON::JSONNode);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNode*, "OVRSimpleJSON", "JSONNode");
NEED_NO_BOX(::OVRSimpleJSON::JSONNode_LinqEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNode_LinqEnumerator*, "OVRSimpleJSON", "JSONNode/LinqEnumerator");
NEED_NO_BOX(::OVRSimpleJSON::JSONNode__get_Children_d__43);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNode__get_Children_d__43*, "OVRSimpleJSON", "JSONNode/<get_Children>d__43");
NEED_NO_BOX(::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*, "OVRSimpleJSON", "JSONNode/<get_DeepChildren>d__45");
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNode_Enumerator, "OVRSimpleJSON", "JSONNode/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNode_KeyEnumerator, "OVRSimpleJSON", "JSONNode/KeyEnumerator");
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNode_ValueEnumerator, "OVRSimpleJSON", "JSONNode/ValueEnumerator");
