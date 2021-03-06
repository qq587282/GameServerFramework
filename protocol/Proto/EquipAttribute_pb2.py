# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: protocol/Proto/EquipAttribute.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='protocol/Proto/EquipAttribute.proto',
  package='protocol.item',
  serialized_pb='\n#protocol/Proto/EquipAttribute.proto\x12\rprotocol.item\"@\n\x0e\x45quipAttribute\x12.\n\x08\x61ttrData\x18\x02 \x03(\x0b\x32\x1c.protocol.item.AttributeData\"E\n\rAttributeData\x12\x0e\n\x06\x61ttrID\x18\x01 \x02(\r\x12\x11\n\tqualityID\x18\x02 \x02(\r\x12\x11\n\tattrValue\x18\x03 \x02(\r\"\xb0\x06\n\rAttributeList\x12\x16\n\x0e\x61\x64\x64\x41ttackValue\x18\x01 \x01(\r\x12\x18\n\x10\x61\x64\x64\x41ttackPercent\x18\x02 \x01(\r\x12\x17\n\x0f\x61\x64\x64\x44\x65\x66\x65nceValue\x18\x03 \x01(\r\x12\x19\n\x11\x61\x64\x64\x44\x65\x66\x65ncePercent\x18\x04 \x01(\r\x12\x1b\n\x13\x61\x64\x64MagicAttackValue\x18\x05 \x01(\r\x12\x1d\n\x15\x61\x64\x64MagicAttackPercent\x18\x06 \x01(\r\x12\x12\n\naddMPValue\x18\x07 \x01(\r\x12\x14\n\x0c\x61\x64\x64MPPercent\x18\x08 \x01(\r\x12\x12\n\naddHPValue\x18\t \x01(\r\x12\x14\n\x0c\x61\x64\x64HPPercent\x18\n \x01(\r\x12\x1c\n\x14\x61\x64\x64MagicDefenceValue\x18\x0b \x01(\r\x12\x1e\n\x16\x61\x64\x64MagicDefencePercent\x18\x0c \x01(\r\x12\x15\n\rsubRemoteHurt\x18\r \x01(\r\x12\x14\n\x0csubCloseHurt\x18\x0e \x01(\r\x12\x15\n\rsubNormalHurt\x18\x0f \x01(\r\x12\x14\n\x0csubMagicHurt\x18\x10 \x01(\r\x12\x10\n\x08hitValue\x18\x11 \x01(\r\x12\x11\n\tappendHit\x18\x12 \x01(\r\x12\x12\n\navoidValue\x18\x13 \x01(\r\x12\x13\n\x0b\x61ppendAvoid\x18\x14 \x01(\r\x12\x0c\n\x04\x63rit\x18\x15 \x01(\r\x12\x12\n\nappendCrit\x18\x16 \x01(\r\x12\x13\n\x0b\x63ritDefence\x18\x17 \x01(\r\x12\x19\n\x11\x61ppendCritDefence\x18\x18 \x01(\r\x12\x11\n\tcritValue\x18\x19 \x01(\r\x12\x12\n\npureDamage\x18\x1a \x01(\r\x12\x13\n\x0b\x61\x62sorbBlood\x18\x1b \x01(\r\x12\x0f\n\x07rebound\x18\x1c \x01(\r\x12\x16\n\x0ereboundPercent\x18\x1d \x01(\r\x12\x11\n\tkillAddHP\x18\x1e \x01(\r\x12\x10\n\x08hitAddHP\x18\x1f \x01(\r\x12\x15\n\rbeAttackAddHP\x18  \x01(\r\x12\x11\n\tkillAddMP\x18! \x01(\r\x12\x10\n\x08hitAddMP\x18\" \x01(\r\x12\x15\n\rbeAttackAddMP\x18# \x01(\r\x12\x14\n\x0c\x61\x64\x64MoveSpeed\x18$ \x01(\r')




_EQUIPATTRIBUTE = _descriptor.Descriptor(
  name='EquipAttribute',
  full_name='protocol.item.EquipAttribute',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='attrData', full_name='protocol.item.EquipAttribute.attrData', index=0,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=54,
  serialized_end=118,
)


_ATTRIBUTEDATA = _descriptor.Descriptor(
  name='AttributeData',
  full_name='protocol.item.AttributeData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='attrID', full_name='protocol.item.AttributeData.attrID', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='qualityID', full_name='protocol.item.AttributeData.qualityID', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='attrValue', full_name='protocol.item.AttributeData.attrValue', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=120,
  serialized_end=189,
)


_ATTRIBUTELIST = _descriptor.Descriptor(
  name='AttributeList',
  full_name='protocol.item.AttributeList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='addAttackValue', full_name='protocol.item.AttributeList.addAttackValue', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addAttackPercent', full_name='protocol.item.AttributeList.addAttackPercent', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addDefenceValue', full_name='protocol.item.AttributeList.addDefenceValue', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addDefencePercent', full_name='protocol.item.AttributeList.addDefencePercent', index=3,
      number=4, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addMagicAttackValue', full_name='protocol.item.AttributeList.addMagicAttackValue', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addMagicAttackPercent', full_name='protocol.item.AttributeList.addMagicAttackPercent', index=5,
      number=6, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addMPValue', full_name='protocol.item.AttributeList.addMPValue', index=6,
      number=7, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addMPPercent', full_name='protocol.item.AttributeList.addMPPercent', index=7,
      number=8, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addHPValue', full_name='protocol.item.AttributeList.addHPValue', index=8,
      number=9, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addHPPercent', full_name='protocol.item.AttributeList.addHPPercent', index=9,
      number=10, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addMagicDefenceValue', full_name='protocol.item.AttributeList.addMagicDefenceValue', index=10,
      number=11, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addMagicDefencePercent', full_name='protocol.item.AttributeList.addMagicDefencePercent', index=11,
      number=12, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='subRemoteHurt', full_name='protocol.item.AttributeList.subRemoteHurt', index=12,
      number=13, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='subCloseHurt', full_name='protocol.item.AttributeList.subCloseHurt', index=13,
      number=14, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='subNormalHurt', full_name='protocol.item.AttributeList.subNormalHurt', index=14,
      number=15, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='subMagicHurt', full_name='protocol.item.AttributeList.subMagicHurt', index=15,
      number=16, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='hitValue', full_name='protocol.item.AttributeList.hitValue', index=16,
      number=17, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='appendHit', full_name='protocol.item.AttributeList.appendHit', index=17,
      number=18, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='avoidValue', full_name='protocol.item.AttributeList.avoidValue', index=18,
      number=19, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='appendAvoid', full_name='protocol.item.AttributeList.appendAvoid', index=19,
      number=20, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='crit', full_name='protocol.item.AttributeList.crit', index=20,
      number=21, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='appendCrit', full_name='protocol.item.AttributeList.appendCrit', index=21,
      number=22, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='critDefence', full_name='protocol.item.AttributeList.critDefence', index=22,
      number=23, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='appendCritDefence', full_name='protocol.item.AttributeList.appendCritDefence', index=23,
      number=24, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='critValue', full_name='protocol.item.AttributeList.critValue', index=24,
      number=25, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pureDamage', full_name='protocol.item.AttributeList.pureDamage', index=25,
      number=26, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='absorbBlood', full_name='protocol.item.AttributeList.absorbBlood', index=26,
      number=27, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='rebound', full_name='protocol.item.AttributeList.rebound', index=27,
      number=28, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='reboundPercent', full_name='protocol.item.AttributeList.reboundPercent', index=28,
      number=29, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='killAddHP', full_name='protocol.item.AttributeList.killAddHP', index=29,
      number=30, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='hitAddHP', full_name='protocol.item.AttributeList.hitAddHP', index=30,
      number=31, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='beAttackAddHP', full_name='protocol.item.AttributeList.beAttackAddHP', index=31,
      number=32, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='killAddMP', full_name='protocol.item.AttributeList.killAddMP', index=32,
      number=33, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='hitAddMP', full_name='protocol.item.AttributeList.hitAddMP', index=33,
      number=34, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='beAttackAddMP', full_name='protocol.item.AttributeList.beAttackAddMP', index=34,
      number=35, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='addMoveSpeed', full_name='protocol.item.AttributeList.addMoveSpeed', index=35,
      number=36, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=192,
  serialized_end=1008,
)

_EQUIPATTRIBUTE.fields_by_name['attrData'].message_type = _ATTRIBUTEDATA
DESCRIPTOR.message_types_by_name['EquipAttribute'] = _EQUIPATTRIBUTE
DESCRIPTOR.message_types_by_name['AttributeData'] = _ATTRIBUTEDATA
DESCRIPTOR.message_types_by_name['AttributeList'] = _ATTRIBUTELIST

class EquipAttribute(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _EQUIPATTRIBUTE

  # @@protoc_insertion_point(class_scope:protocol.item.EquipAttribute)

class AttributeData(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _ATTRIBUTEDATA

  # @@protoc_insertion_point(class_scope:protocol.item.AttributeData)

class AttributeList(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _ATTRIBUTELIST

  # @@protoc_insertion_point(class_scope:protocol.item.AttributeList)


# @@protoc_insertion_point(module_scope)
